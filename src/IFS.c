#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <time.h>
#include <math.h>
#include "configSDL.h"
#include "chargement.h"
#include "IFS.h"

/** \file IFS.c
* \author Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \brief Dessine une fractale IFS
* \date 14 Novembre 2011
*/

/*! \fn void baseIFS(int nb);
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief permet de charger un IFS
* \param nb choix de l'IFS
*/
void baseIFS(int nb)
{
        /*Evenement molette */
    SDL_Event event;
    int continuer=1;
    int abs=0;
    int ord=0;
    SDL_Surface *ecran = NULL, *pixel = NULL;
    int val1,val2,val3,val4;
    int image_x;
    int image_y;
    int k =0,r=0;
    SDL_Rect position;
    int zoom;
    float p[2]= {0,0};

    srand(time(NULL));
    chargementModif("IFS.txt",&val1,&val2,&val3,&val4);
    image_x = val1;
    image_y = val2;
    zoom = val3;
    ecran = initialisationEcranTitre(ecran,image_x,image_y,"Fractale IFS");
    pixel = initialisationPixel(pixel);

    if(nb == 1)dessin123(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 2)dessinFeuille(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 3)dessinFougere(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 4)dessinTriangle(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 5)dessinTest(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 6)dessinTest2(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 7)dessinTest3(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 8)dessinTest4(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 9)dessinTest6(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);




    while (continuer)
        {
        SDL_PollEvent(&event);
        if( event.type == SDL_MOUSEBUTTONUP ){
                    if( event.button.button == SDL_BUTTON_WHEELUP ){
                                zoom=zoom+10;
                                ecran = initialisationEcran(ecran,image_x,image_y);
    if(nb == 1)dessin123(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 2)dessinFeuille(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 3)dessinFougere(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 4)dessinTriangle(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 5)dessinTest(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 6)dessinTest2(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 7)dessinTest3(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 8)dessinTest4(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 9)dessinTest6(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
                    }

                }
                else if( event.type == SDL_MOUSEBUTTONDOWN ){
                    if( event.button.button == SDL_BUTTON_WHEELDOWN ){
                                zoom=zoom-10;
                                ecran = initialisationEcran(ecran,image_x,image_y);
    if(nb == 1)dessin123(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 2)dessinFeuille(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 3)dessinFougere(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 4)dessinTriangle(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 5)dessinTest(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 6)dessinTest2(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 7)dessinTest3(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 8)dessinTest4(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 9)dessinTest6(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
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
                                    ecran = initialisationEcran(ecran,image_x,image_y);
    if(nb == 1)dessin123(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 2)dessinFeuille(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 3)dessinFougere(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 4)dessinTriangle(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 5)dessinTest(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 6)dessinTest2(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 7)dessinTest3(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 8)dessinTest4(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 9)dessinTest6(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
                                    break;
                                case SDLK_DOWN:
                                    ord=ord+100;
                                    ecran = initialisationEcran(ecran,image_x,image_y);
    if(nb == 1)dessin123(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 2)dessinFeuille(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 3)dessinFougere(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 4)dessinTriangle(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 5)dessinTest(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 6)dessinTest2(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 7)dessinTest3(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 8)dessinTest4(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 9)dessinTest6(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
                                    break;
                                case SDLK_RIGHT:
                                    abs=abs-100;
                                    ecran = initialisationEcran(ecran,image_x,image_y);
    if(nb == 1)dessin123(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p);
    if(nb == 2)dessinFeuille(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 3)dessinFougere(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 4)dessinTriangle(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 5)dessinTest(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 6)dessinTest2(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 7)dessinTest3(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 8)dessinTest4(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 9)dessinTest6(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
                                    break;
                                case SDLK_LEFT:
                                    abs=abs+100;
                                    ecran = initialisationEcran(ecran,image_x,image_y);
    if(nb == 1)dessin123(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 2)dessinFeuille(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 3)dessinFougere(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 4)dessinTriangle(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 5)dessinTest(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 6)dessinTest2(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 7)dessinTest3(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 8)dessinTest4(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
    if(nb == 9)dessinTest6(abs,ord,pixel,ecran,image_y,image_x,position,k,r,zoom,p,val4);
                                    break;
                            }
                            break;
                }
    SDL_Flip(ecran);
          }


    libererMem(ecran, pixel);
}


/*! \fn void dessin123(SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief dessine une forme
* \param pixel surface a dessiner
* \param ecran pointeur vers notre fenetre
* \param image_y taille verticale de la fenetre
* \param image_x taille horizontal de la fenetre
* \param position variable o l'on stockera la position du point  dessiner
* \param k variable pour la boucle
* \param r variable aleatoire
* \param zoom indique le grossissement
* \param p[2] contient les positions du point  dessiner avant l'ajustement par rapport  la fenetre
* \param val4 nombre d'iteration de la boucle, qualite de l'image
*/
void dessin123(int abs, int ord,SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
{
    float tmp;

	int i1,i2,i3,j,i,couleur=0;

	int **tab = (int*)malloc(image_x * sizeof(int*));
	for(i3 = 0; i3 < image_x; i3++){
		tab[i3] = (int)malloc(image_y * sizeof(int));
	}
	for(i1=0;i1<image_x;i1++) {
		for(i2=0;i2<image_y;i2++) {
			tab[i1][i2] = 0;
		}
	}

    for(k=1; k<val4; k++)
    {
        r=rand()%100;
        tmp = p[0];
        if (r<33)
        {
            p[0]=0.824074*p[0]+0.281428*p[1]-1.88229;
            p[1]=-0.212346*tmp+0.864198*p[1]-0.110607;
        }
        else
        {
            p[0]=0.088272*p[0]+0.520988*p[1]+0.785360;
            p[1]=-0.463889*tmp-0.377778*p[1]+8.095795;
        }
	
        position.x=(p[0] * zoom + image_x / 2)+abs;
        position.y= (image_y - p[1] * zoom - 100)+ord;

	if(position.x < 0 || position.x >image_x || position.y < 0 || position.y > image_y){	
		k--;
	}
	else{
		if ((position.x < image_x) && (position.y < image_y) && (position.x >=0) && (position.y >=0)){
		tab[(int)position.x][(int)position.y] = tab[(int)position.x][(int)position.y] +1;
		}
	        /*SDL_BlitSurface(pixel, NULL, ecran, &position); *//* Collage*/
	}
    }
	for (j=0;j<image_x; j++){
		for (k=0;k<image_y; k++){
			if(j > 0 && k > 0 && j < image_x-1 && k < image_y-1){
				couleur=(tab[j-1][k-1]+tab[j-1][k]+tab[j-1][k+1]+tab[j][k-1]+tab[j][k+1]+tab[j+1][k-1]+tab[j+1][k]+tab[j+1][k+1])/8;
				if(couleur != 0) couleur += 100;
			}
			
			position.x = j;
			position.y = k;
			
			SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 0, couleur, 0));
			SDL_BlitSurface(pixel, NULL, ecran, &position);
		}
	}
}
/*! \fn void dessinFeuille(SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief dessine une feuille
* \param pixel surface a dessiner
* \param ecran pointeur vers notre fenetre
* \param image_y taille verticale de la fenetre
* \param image_x taille horizontal de la fenetre
* \param position variable o l'on stockera la position du point  dessiner
* \param k variable pour la boucle
* \param r variable aleatoire
* \param zoom indique le grossissement
* \param p[2] contient les positions du point  dessiner avant l'ajustement par rapport  la fenetre
* \param val4 nombre d'iteration de la boucle, qualite de l'image
*/
void dessinFeuille(int abs, int ord,SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
{
    float tmp;
	int i1,i2,i3,j,i,couleur=0;

	int **tab = (int*)malloc(image_x * sizeof(int*));
	for(i3 = 0; i3 < image_x; i3++){
		tab[i3] = (int)malloc(image_y * sizeof(int));
	}
	for(i1=0;i1<image_x;i1++) {
		for(i2=0;i2<image_y;i2++) {
			tab[i1][i2] = 0;
		}
	}




    for(k=1; k<val4; k++)
    {
        r=rand()%100;
        tmp = p[0];
        if (r<10)
        {
            p[0]=0.14*p[0]+0.01*p[1]-0.08;
            p[1]=0.51*p[1]-1.31;
        }
        else if (r<45)
        {
            p[0]=0.43*p[0]+0.52*p[1]+1.49;
            p[1]=-0.45*tmp+0.50*p[1]-0.75;
        }
        else if (r<80)
        {
            p[0]=0.45*p[0]-0.49*p[1]-1.62;
            p[1]=0.47*tmp+0.47*p[1]-0.74;
        }
        else
        {

            p[0]=-0.49*p[0]+0.02;
            p[1]=0.51*p[1]+1.62;
        }
        position.x=(p[0] * zoom * 1.5 + image_x / 2)+abs;
        position.y= (image_y - 450 - p[1] * zoom * 1.5)+ord;
       	if(position.x < 0 || position.x >image_x || position.y < 0 || position.y > image_y){	
		k--;
	}
	else{
		if ((position.x < image_x) && (position.y < image_y) && (position.x >=0) && (position.y >=0)){
		tab[(int)position.x][(int)position.y] = tab[(int)position.x][(int)position.y] +1;
		}
	        /*SDL_BlitSurface(pixel, NULL, ecran, &position); *//* Collage*/
	}
    }
	for (j=0;j<image_x; j++){
		for (k=0;k<image_y; k++){
			if(j > 0 && k > 0 && j < image_x-1 && k < image_y-1){
				couleur=(tab[j-1][k-1]+tab[j-1][k]+tab[j-1][k+1]+tab[j][k-1]+tab[j][k+1]+tab[j+1][k-1]+tab[j+1][k]+tab[j+1][k+1])/8;
				if(couleur != 0) couleur += 100;
			}
			
			position.x = j;
			position.y = k;
			
			SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 0, couleur, 0));
			SDL_BlitSurface(pixel, NULL, ecran, &position);
		}
	}
}

/*! \fn void dessinFougere(SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief dessine une fougere
* \param pixel surface a dessiner
* \param ecran pointeur vers notre fenetre
* \param image_y taille verticale de la fenetre
* \param image_x taille horizontal de la fenetre
* \param position variable o l'on stockera la position du point  dessiner
* \param k variable pour la boucle
* \param r variable aleatoire
* \param zoom indique le grossissement
* \param p[2] contient les positions du point  dessiner avant l'ajustement par rapport  la fenetre
* \param val4 nombre d'iteration de la boucle, qualite de l'image
*/
void dessinFougere(int abs, int ord,SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
{
	int i1,i2,i3,j,i,couleur=0;

	int **tab = (int*)malloc(image_x * sizeof(int*));
	for(i3 = 0; i3 < image_x; i3++){
		tab[i3] = (int)malloc(image_y * sizeof(int));
	}
	for(i1=0;i1<image_x;i1++) {
		for(i2=0;i2<image_y;i2++) {
			tab[i1][i2] = 0;
		}
	}
    float tmp;
    for(k=1; k<val4; k++)
    {
        r=rand()%100;
        tmp = p[0];
        if (r<25)
        {
            p[0]=0;
            p[1]=0.16*p[1];
        }
        else if (r<50)
        {
            p[0]=0.85*p[0]+0.04*p[1];
            p[1]=-0.04*tmp+0.85*p[1]+1.6;
        }
        else if (r<75)
        {
            p[0]=0.2*p[0]-0.26*p[1];
            p[1]=0.23*tmp+0.22*p[1]+0.8;
        }
        else
        {
            p[0]=-0.15*p[0]+0.28*p[1];
            p[1]=-0.26*tmp+0.24*p[1]+0.44;
        }
        position.x=(p[0] * zoom*2 + image_x / 2)+abs;
        position.y= (image_y - p[1] * zoom*2)+ord;
       	if(position.x < 0 || position.x >image_x || position.y < 0 || position.y > image_y){	
		k--;
	}
	else{
		if ((position.x < image_x) && (position.y < image_y) && (position.x >=0) && (position.y >=0)){
		tab[(int)position.x][(int)position.y] = tab[(int)position.x][(int)position.y] +1;
		}
	        /*SDL_BlitSurface(pixel, NULL, ecran, &position); *//* Collage*/
	}
    }
	for (j=0;j<image_x; j++){
		for (k=0;k<image_y; k++){
			if(j > 0 && k > 0 && j < image_x-1 && k < image_y-1){
				couleur=(tab[j-1][k-1]+tab[j-1][k]+tab[j-1][k+1]+tab[j][k-1]+tab[j][k+1]+tab[j+1][k-1]+tab[j+1][k]+tab[j+1][k+1])/8;
				if(couleur != 0) couleur += 100;
			}
			
			position.x = j;
			position.y = k;
			
			SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 0, couleur, 0));
			SDL_BlitSurface(pixel, NULL, ecran, &position);
		}
	}
}
/*! \fn void dessinTriangle(SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief dessine un triangle
* \param pixel surface a dessiner
* \param ecran pointeur vers notre fenetre
* \param image_y taille verticale de la fenetre
* \param image_x taille horizontal de la fenetre
* \param position variable o l'on stockera la position du point  dessiner
* \param k variable pour la boucle
* \param r variable aleatoire
* \param zoom indique le grossissement
* \param p[2] contient les positions du point  dessiner avant l'ajustement par rapport  la fenetre
* \param val4 nombre d'iteration de la boucle, qualite de l'image
*/
void dessinTriangle(int abs, int ord,SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
{
	int i1,i2,i3,j,i,couleur=0;

	int **tab = (int*)malloc(image_x * sizeof(int*));
	for(i3 = 0; i3 < image_x; i3++){
		tab[i3] = (int)malloc(image_y * sizeof(int));
	}
	for(i1=0;i1<image_x;i1++) {
		for(i2=0;i2<image_y;i2++) {
			tab[i1][i2] = 0;
		}
	}
    for(k=1; k<val4/8; k++)
    {
        r=rand()%100;
        if (r<33)
        {

            p[0]=0.5*p[0];
            p[1]=0.5*p[1];
        }
        else if (r<66)
        {
            p[0]=0.5*p[0]+0.5;
            p[1]=0.5*p[1];
        }
        else
        {
            p[0]=0.5*p[0]+0.25;
            p[1]=0.5*p[1]+0.5;
        }

        position.x = (p[0] * zoom *7)+abs /*+ image_x / 2*/;
        position.y = (image_y - p[1] * zoom*7)+ord;

	if(position.x < 0 || position.x >image_x || position.y < 0 || position.y > image_y){	
		k--;
	}
	else{
		if ((position.x < image_x) && (position.y < image_y) && (position.x >=0) && (position.y >=0)){
		tab[(int)position.x][(int)position.y] = tab[(int)position.x][(int)position.y] +1;
		}
	        /*SDL_BlitSurface(pixel, NULL, ecran, &position); *//* Collage*/
	}
    }
	for (j=0;j<image_x; j++){
		for (k=0;k<image_y; k++){
			if(j > 0 && k > 0 && j < image_x-1 && k < image_y-1){
				couleur=(tab[j-1][k-1]+tab[j-1][k]+tab[j-1][k+1]+tab[j][k-1]+tab[j][k+1]+tab[j+1][k-1]+tab[j+1][k]+tab[j+1][k+1])/8;
				if(couleur != 0) couleur += 100;
			}
			
			position.x = j;
			position.y = k;
			
			SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 0, couleur, 0));
			SDL_BlitSurface(pixel, NULL, ecran, &position);
		}
	}
}
/*! \fn void dessinTest2(SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 10 Decembre 2011
* \brief dessine un arbre de noel
* \param pixel surface a dessiner
* \param ecran pointeur vers notre fenetre
* \param image_y taille verticale de la fenetre
* \param image_x taille horizontal de la fenetre
* \param position variable o l'on stockera la position du point  dessiner
* \param k variable pour la boucle
* \param r variable aleatoire
* \param zoom indique le grossissement
* \param p[2] contient les positions du point  dessiner avant l'ajustement par rapport  la fenetre
* \param val4 nombre d'iteration de la boucle, qualite de l'image
*/
void dessinTest2(int abs, int ord,SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
{
	int i1,i2,i3,j,i,couleur=0;

	int **tab = (int*)malloc(image_x * sizeof(int*));
	for(i3 = 0; i3 < image_x; i3++){
		tab[i3] = (int)malloc(image_y * sizeof(int));
	}
	for(i1=0;i1<image_x;i1++) {
		for(i2=0;i2<image_y;i2++) {
			tab[i1][i2] = 0;
		}
	}
    for(k=1; k<val4/10; k++)
    {
        float tmp;
        tmp = p[0];
        r=rand()%100;
        if (r<33)
        {
            p[0]=-0.5*p[1]+0.5;
            p[1]=0.5*tmp;
        }
        else if (r<66)
        {
            p[0]=0.5*p[1]+0.5;
            p[1]=-0.5*tmp+0.5;
        }
        else
        {
            p[0]=0.5*p[0]+0.25;
            p[1]=0.5*p[1]+0.5;
        }

        position.x = (p[0] * zoom *7/*+ image_x / 2*/)+abs;
        position.y = (image_y - p[1] * zoom*7)+ord;
        	if(position.x < 0 || position.x >image_x || position.y < 0 || position.y > image_y){	
		k--;
	}
	else{
		if ((position.x < image_x) && (position.y < image_y) && (position.x >=0) && (position.y >=0)){
		tab[(int)position.x][(int)position.y] = tab[(int)position.x][(int)position.y] +1;
		}
	        /*SDL_BlitSurface(pixel, NULL, ecran, &position); *//* Collage*/
	}
    }
	for (j=0;j<image_x; j++){
		for (k=0;k<image_y; k++){
			if(j > 0 && k > 0 && j < image_x-1 && k < image_y-1){
				couleur=(tab[j-1][k-1]+tab[j-1][k]+tab[j-1][k+1]+tab[j][k-1]+tab[j][k+1]+tab[j+1][k-1]+tab[j+1][k]+tab[j+1][k+1])/8;
				if(couleur != 0) couleur += 100;
			}
			
			position.x = j;
			position.y = k;
			
			SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 0, couleur, 0));
			SDL_BlitSurface(pixel, NULL, ecran, &position);
		}
	}
}
/*! \fn void dessinTest(SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 10 Decembre 2011
* \brief dessine un oursin des sables
* \param pixel surface a dessiner
* \param ecran pointeur vers notre fenetre
* \param image_y taille verticale de la fenetre
* \param image_x taille horizontal de la fenetre
* \param position variable o l'on stockera la position du point  dessiner
* \param k variable pour la boucle
* \param r variable aleatoire
* \param zoom indique le grossissement
* \param p[2] contient les positions du point  dessiner avant l'ajustement par rapport  la fenetre
* \param val4 nombre d'iteration de la boucle, qualite de l'image
*/
void dessinTest(int abs, int ord,SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
{
	int i1,i2,i3,j,i,couleur=0;

	int **tab = (int*)malloc(image_x * sizeof(int*));
	for(i3 = 0; i3 < image_x; i3++){
		tab[i3] = (int)malloc(image_y * sizeof(int));
	}
	for(i1=0;i1<image_x;i1++) {
		for(i2=0;i2<image_y;i2++) {
			tab[i1][i2] = 0;
		}
	}
    for(k=1; k<val4; k++)
    {
        float tmp;
        tmp = p[0];
        r=rand()%100;
        if (r<16.6666)
        {
            p[0]=0.382*p[0]+0.309;
            p[1]=0.382*p[1]+0.57;
        }
        else if (r<33.33333)
        {
            p[0]=0.118*p[0]-0.3633*p[1]+0.3633;
            p[1]=0.3633*tmp+0.118*p[1]+0.3306;
        }
        else if (r<50)
        {
            p[0]=0.118*p[0]+0.3633*p[1]+0.5187;
            p[1]=-0.3633*tmp+0.118*p[1]+0.694;
        }
        else if (r<66.666666)
        {
            p[0]=-0.309*p[0]-0.2245*p[1]+0.607;
            p[1]=0.2245*tmp-0.309*p[1]+0.309;
        }
        else if (r<83.33333)
        {
            p[0]=-0.309*p[0]+0.2245*p[1]+0.7016;
            p[1]=-0.2245*tmp-0.309*p[1]+0.5335;
        }
        else
        {
            p[0]=0.382*p[0]+0.309;
            p[1]=-0.382*p[1]+0.677;
        }
        position.x = abs+(p[0] * zoom *10);
        position.y = ord+(image_y - p[1] * zoom*10);

	if(position.x < 0 || position.x >image_x || position.y < 0 || position.y > image_y){	
		k--;
	}
	else{
		if ((position.x < image_x) && (position.y < image_y) && (position.x >=0) && (position.y >=0)){
		tab[(int)position.x][(int)position.y] = tab[(int)position.x][(int)position.y] +1;
		}
	        /*SDL_BlitSurface(pixel, NULL, ecran, &position); *//* Collage*/
	}
    }
	for (j=0;j<image_x; j++){
		for (k=0;k<image_y; k++){
			if(j > 0 && k > 0 && j < image_x-1 && k < image_y-1){
				couleur=(tab[j-1][k-1]+tab[j-1][k]+tab[j-1][k+1]+tab[j][k-1]+tab[j][k+1]+tab[j+1][k-1]+tab[j+1][k]+tab[j+1][k+1])/8;
				if(couleur != 0) couleur += 100;
			}
			
			position.x = j;
			position.y = k;
			
			SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 0, couleur, 0));
			SDL_BlitSurface(pixel, NULL, ecran, &position);
		}
	}
}
/*! \fn void dessinTest3(SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 10 Decembre 2011
* \brief dessine un arbre
* \param pixel surface a dessiner
* \param ecran pointeur vers notre fenetre
* \param image_y taille verticale de la fenetre
* \param image_x taille horizontal de la fenetre
* \param position variable o l'on stockera la position du point  dessiner
* \param k variable pour la boucle
* \param r variable aleatoire
* \param zoom indique le grossissement
* \param p[2] contient les positions du point  dessiner avant l'ajustement par rapport  la fenetre
* \param val4 nombre d'iteration de la boucle, qualite de l'image
*/
void dessinTest3(int abs, int ord,SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
{
	int i1,i2,i3,j,i,couleur=0;

	int **tab = (int*)malloc(image_x * sizeof(int*));
	for(i3 = 0; i3 < image_x; i3++){
		tab[i3] = (int)malloc(image_y * sizeof(int));
	}
	for(i1=0;i1<image_x;i1++) {
		for(i2=0;i2<image_y;i2++) {
			tab[i1][i2] = 0;
		}
	}
    for(k=1; k<val4; k++)
    {
        float tmp;
        tmp = p[0];
        r=rand()%100;
        if (r<20)
        {
            p[0]=0.1950*p[0]-0.488*p[1]+0.4431;
            p[1]=0.443*p[1]+tmp*0.334+0.2452;
        }
        else if (r<40)
        {
            p[0]=0.462*p[0]+0.414*p[1]+0.2511;
            p[1]=-0.252*tmp+0.361*p[1]+0.5692;
        }
        else if (r<60)
        {
            p[0]=-0.637*p[0]+0*p[1]+0.8562;
            p[1]=0*tmp+0.501*p[1]+0.2512;
        }
        else if (r<80)
        {
            p[0]=-0.035*p[0]+0.07*p[1]+0.4884;
            p[1]=-0.469*tmp+0.022*p[1]+0.5069;
        }
        else
        {
            p[0]=-0.058*p[0]-0.07*p[1]+0.5976;
            p[1]=0.453*tmp-0.111*p[1]+0.0969;
        }
        position.x = (p[0] * zoom *6 + image_x / 4)+abs;
        position.y = (image_y - p[1] * zoom*6)+ord;
        	if(position.x < 0 || position.x >image_x || position.y < 0 || position.y > image_y){	
		k--;
	}
	else{
		if ((position.x < image_x) && (position.y < image_y) && (position.x >=0) && (position.y >=0)){
		tab[(int)position.x][(int)position.y] = tab[(int)position.x][(int)position.y] +1;
		}
	        /*SDL_BlitSurface(pixel, NULL, ecran, &position); *//* Collage*/
	}
    }
	for (j=0;j<image_x; j++){
		for (k=0;k<image_y; k++){
			if(j > 0 && k > 0 && j < image_x-1 && k < image_y-1){
				couleur=(tab[j-1][k-1]+tab[j-1][k]+tab[j-1][k+1]+tab[j][k-1]+tab[j][k+1]+tab[j+1][k-1]+tab[j+1][k]+tab[j+1][k+1])/8;
				if(couleur != 0) couleur += 100;
			}
			
			position.x = j;
			position.y = k;
			
			SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 0, couleur, 0));
			SDL_BlitSurface(pixel, NULL, ecran, &position);
		}
	}
}

/*! \fn void dessinTest4(SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 10 Decembre 2011
* \brief dessine une spirale
* \param pixel surface a dessiner
* \param ecran pointeur vers notre fenetre
* \param image_y taille verticale de la fenetre
* \param image_x taille horizontal de la fenetre
* \param position variable o l'on stockera la position du point  dessiner
* \param k variable pour la boucle
* \param r variable aleatoire
* \param zoom indique le grossissement
* \param p[2] contient les positions du point  dessiner avant l'ajustement par rapport  la fenetre
* \param val4 nombre d'iteration de la boucle, qualite de l'image
*/
void dessinTest4(int abs, int ord,SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
{
	int i1,i2,i3,j,i,couleur=0;

	int **tab = (int*)malloc(image_x * sizeof(int*));
	for(i3 = 0; i3 < image_x; i3++){
		tab[i3] = (int)malloc(image_y * sizeof(int));
	}
	for(i1=0;i1<image_x;i1++) {
		for(i2=0;i2<image_y;i2++) {
			tab[i1][i2] = 0;
		}
	}
    for(k=1; k<val4; k++)
    {
        float tmp;
        tmp = p[0];
        r=rand()%100;
        if (r<90)
        {
            p[0]=0.787879*p[0]-0.424242*p[1]+1.758647;
            p[1]=0.859848*p[1]+tmp*0.242424+1.408065;
        }
        else if (r<95)
        {
            p[0]=-0.121212*p[0]+0.257576*p[1]-6.721654;
            p[1]=0.151515*tmp+0.053030*p[1]+1.377236;
        }
        else
        {
            p[0]=0.181818*p[0]-0.136364*p[1]+6.086107;
            p[1]=0.090909*tmp+0.181818*p[1]+1.568035;
        }

        position.x = abs+(p[0] * zoom + image_x / 2);
        position.y = ord+(image_y - 150 - p[1] * zoom);
	if(position.x < 0 || position.x >image_x || position.y < 0 || position.y > image_y){	
		k--;
	}
	else{
		if ((position.x < image_x) && (position.y < image_y) && (position.x >=0) && (position.y >=0)){
		tab[(int)position.x][(int)position.y] = tab[(int)position.x][(int)position.y] +1;
		}
	        /*SDL_BlitSurface(pixel, NULL, ecran, &position); *//* Collage*/
	}
    }
	for (j=0;j<image_x; j++){
		for (k=0;k<image_y; k++){
			if(j > 0 && k > 0 && j < image_x-1 && k < image_y-1){
				couleur=(tab[j-1][k-1]+tab[j-1][k]+tab[j-1][k+1]+tab[j][k-1]+tab[j][k+1]+tab[j+1][k-1]+tab[j+1][k]+tab[j+1][k+1])/8;
				if(couleur != 0) couleur += 100;
			}
			
			position.x = j;
			position.y = k;
			
			SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 0, couleur, 0));
			SDL_BlitSurface(pixel, NULL, ecran, &position);
		}
	}
}




/*! \fn void dessinTest6(SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 10 Decembre 2011
* \brief dessine un arbre
* \param pixel surface a dessiner
* \param ecran pointeur vers notre fenetre
* \param image_y taille verticale de la fenetre
* \param image_x taille horizontal de la fenetre
* \param position variable o l'on stockera la position du point  dessiner
* \param k variable pour la boucle
* \param r variable aleatoire
* \param zoom indique le grossissement
* \param p[2] contient les positions du point  dessiner avant l'ajustement par rapport  la fenetre
* \param val4 nombre d'iteration de la boucle, qualite de l'image
*/
void dessinTest6(int abs, int ord,SDL_Surface *pixel,SDL_Surface *ecran,int image_y,int image_x,SDL_Rect position,int k, int r, int zoom,float p[2],int val4)
{
	int i1,i2,i3,j,i,couleur=0;

	int **tab = (int*)malloc(image_x * sizeof(int*));
	for(i3 = 0; i3 < image_x; i3++){
		tab[i3] = (int)malloc(image_y * sizeof(int));
	}
	for(i1=0;i1<image_x;i1++) {
		for(i2=0;i2<image_y;i2++) {
			tab[i1][i2] = 0;
		}
	}
    for(k=1; k<val4; k++)
    {
        float tmp;
        tmp = p[0];
        r=rand()%100;
        if (r<16.66666)
        {
            p[0]=0.05*p[0]*cos(0)-0.6*p[1]*sin(0);
            p[1]=0.05*tmp*sin(0)+p[1]*0.6*cos(0);
        }
        else if (r<33.3333333)
        {
            p[0]=0.05*p[0]*cos(0)+0.5*p[1]*sin(0);
            p[1]=0.05*tmp*sin(0)-p[1]*0.5*cos(0)+1;
        }
        else if (r<50)
        {
            p[0]=0.6*p[0]*cos(0.698)-0.5*p[1]*sin(0.698);
            p[1]=0.6*tmp*sin(0.698)+p[1]*0.5*cos(0.698)+0.6;
        }
        else if (r<66.666666)
        {
            p[0]=0.5*p[0]*cos(0.349)-0.45*p[1]*sin(0.3492);
            p[1]=0.5*tmp*sin(0.349)+p[1]*0.45*cos(0.3492)+1.1;
        }
        else if (r<83.333333)
        {
            p[0]=0.5*p[0]*cos(-0.524)-0.55*p[1]*sin(-0.524);
            p[1]=0.5*tmp*sin(-0.524)+p[1]*0.55*cos(-0.524)+1;
        }
        else
        {
            p[0]=0.55*p[0]*cos(-0.698)-0.4*p[1]*sin(-0.698);
            p[1]=0.55*tmp*sin(-0.698)+p[1]*0.4*cos(-0.698)+0.7;
        }
        position.x = (p[0] * zoom * 6 + image_x / 2)+abs;
        position.y = (image_y  - p[1] * zoom * 6)+ord;
	if(position.x < 0 || position.x >image_x || position.y < 0 || position.y > image_y){	
		k--;
	}
	else{
		if ((position.x < image_x) && (position.y < image_y) && (position.x >=0) && (position.y >=0)){
		tab[(int)position.x][(int)position.y] = tab[(int)position.x][(int)position.y] +1;
		}
	        /*SDL_BlitSurface(pixel, NULL, ecran, &position); *//* Collage*/
	}
    }
	for (j=0;j<image_x; j++){
		for (k=0;k<image_y; k++){
			if(j > 0 && k > 0 && j < image_x-1 && k < image_y-1){
				couleur=(tab[j-1][k-1]+tab[j-1][k]+tab[j-1][k+1]+tab[j][k-1]+tab[j][k+1]+tab[j+1][k-1]+tab[j+1][k]+tab[j+1][k+1])/8;
				if(couleur != 0) couleur += 100;
			}
			
			position.x = j;
			position.y = k;
			
			SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 0, couleur, 0));
			SDL_BlitSurface(pixel, NULL, ecran, &position);
		}
	}
}
