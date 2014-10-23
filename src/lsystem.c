#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include "configSDL.h"
#include "chargement.h"


/** \file lsystem.c
* \author Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \brief Dessine une LSystem
* \date 14 Novembre 2011
*/


/*! \fn void baseLSystem(int choix);
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Dessine une LSystem
* \param nb choix du fractal
* \param zoom valeur du zoom, grossissement de la fractale
* \param abs decalage sur l'axe horizontal en fonction de l'appui sur les touches directionnelles
* \param ord decalage sur l'axe vertical en fonction de l'appui sur les touches directionnelles
*/

void baseLSystem(int nb,float zoom, int abs,int ord)
{
     /*Evenement molette */
    SDL_Event event;
    int continuer=1;

	SDL_Surface *ecran = NULL, *pixel = NULL;
	SDL_Rect position;
    	int val1,val2,val3,val4;

	int image_x;
	int image_y;
	float tmp_x;
	float tmp_y;

	char tab[100000] = {0};
	char tmp[100000] = {0};

	float tmp_angle = 0;
	float angle;
	int i = 0,j = 0, compteur = 0,compteurG = 0;


	char *grammaire;
	char *grammaire2;

	if(nb == 1 || nb == 2  || nb == 4 || nb == 6)angle = 90 * 3.1415926 / 180;
	else if(nb == 3)angle = 60 * 3.1415926 / 180;
	else if(nb == 5) angle = 120 * 3.1415926 / 180;

   	if(nb == 1){grammaire = "F+F-F-F+F";grammaire2 = "F+F-F-F+F";}
   	else if(nb == 2){ grammaire = "F+F-F-FF+F+F-F";grammaire2 = "F+F-F-FF+F+F-F";}
	else if(nb == 3){grammaire = "F++F++F";grammaire2 = "F-F++F-F";}
	else if(nb == 4){grammaire = "F+F+F+F";grammaire2 = "FF+F++F+F";}
	else if(nb == 5){grammaire = "F+F+F";grammaire2 = "F-F+F";}
	else if(nb == 6){grammaire = "F+F+F+F";grammaire2 = "FF+F+F+F+F+F-F";}



	chargementModif("lsystem.txt",&val1,&val2,&val3,&val4);

	image_x = val1;
	image_y = val2;
	if(zoom == -1)zoom = val3;
	tmp_x= image_x/2;
	tmp_y= image_y-50;


	ecran = initialisationEcranTitre(ecran,image_x,image_y,"Fractale L-system");
	pixel = initialisationPixel(pixel);


            for(i = 0 ; i <val4; i++){

                    if(i == 0)strcpy(tab, grammaire);
                    else{

                        while(j < strlen(tab)){
                            if(tab[j] == 'F'){
                                for(compteurG = 0 ; compteurG < strlen(grammaire2) ; compteurG++){
                                    tmp[compteur] = grammaire2[compteurG];
                                    compteur++;
                                }
                            }
                            else{
                                tmp[compteur] = tab[j];
                                compteur++;
                            }
                            j++;
                        }

                        strcpy(tab,tmp);
                        for(j  = 0 ; j < strlen(tmp); j++){tmp[j] = 0;}
                        j = 0;
                        compteur = 0;
                    }
                }



            for(i = 0 ; i < strlen(tab) ; i++){
                if(tab[i] == 'F'){
			
                        for(j=0 ; j< 10*zoom ;j++ ){
                            tmp_x -= 1*sin(tmp_angle);
                            tmp_y -= 1*cos(tmp_angle);
                            position.x=tmp_x+abs;
                            position.y=tmp_y+ord;
                            SDL_BlitSurface(pixel, NULL, ecran, &position);
                        }
                    }
                    else if(tab[i] == '+'){
                            tmp_angle += angle;
                    }
                    else if(tab[i] == '-'){
                            tmp_angle -=  angle;
                    }

            }

while (continuer)
        {
        SDL_PollEvent(&event);
        if( event.type == SDL_MOUSEBUTTONUP ){
                    if( event.button.button == SDL_BUTTON_WHEELUP ){
                                zoom=zoom+1;
				continuer = 0;
                                baseLSystem(nb,zoom,abs,ord);

                    }

                }
                else if( event.type == SDL_MOUSEBUTTONDOWN ){
                    if( event.button.button == SDL_BUTTON_WHEELDOWN ){
				if(zoom <= 1)zoom=zoom/1.1;
                                else zoom=zoom-1;
				continuer = 0;
                                baseLSystem(nb,zoom,abs,ord);
                    }

                }

                switch(event.type){
                    case SDL_QUIT:
                        continuer = 0;
                        break;
                    case SDL_KEYDOWN:
                        switch(event.key.keysym.sym){
                                case SDLK_UP:
                                    ord=ord-100;
				continuer = 0;
                                   baseLSystem(nb,zoom,abs,ord);
                                    break;
                                case SDLK_DOWN:
                                    ord=ord+100;
				continuer = 0;
                                    baseLSystem(nb,zoom,abs,ord);
                                    break;
                                case SDLK_RIGHT:
				continuer = 0;
                                    abs=abs-100;
                                    baseLSystem(nb,zoom,abs,ord);
                                    break;
                                case SDLK_LEFT:
				continuer = 0;
                                    abs=abs+100;
                                   baseLSystem(nb,zoom,abs,ord);
                                    break;
                            }
                            break;
                }
    SDL_Flip(ecran);
          }

libererMem(ecran, pixel);
}
