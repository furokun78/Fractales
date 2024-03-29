#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <math.h>
#include <time.h>

#include "configSDL.h"
#include "prog.h"
#include "IFS.h"
#include "lsystem.h"
#include "Mandelbrot.h"
#include "Flame.h"

/** \file prog.c
* \author Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \brief Programme Fractale
* \date 14 Novembre 2011
*/


/*! \fn main();
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Menu
*/
int  main(int argc, char *argv[])
{
    int reponse;

	char* type_fractale = argv[1];

	if (strcmp(type_fractale,"Mandelbrot") == 0){

		 printf("Quelle fractale voulez vous dessiner ? \n");
   	 	 printf("1: Mandelbrot\n 2: MandelBrot-Autre\n 3: MandelBrot-Autre 2\n 4: MandelBrot-Julia\n 5: Quitter\n");
    		 scanf("%d",&reponse);
            switch(reponse){
                while (reponse!=0){
            case 1 :
            /*Mandel */
            printf("dessin de Mandelbrot\n");
            fractale(1,-1,0,0);
            break;
            case 2 :
            /*Mandel Autre 1 */
            printf("dessin de Mandelbrot autre 1\n");
            fractale(3,-1,0,0);
            break;
            case 3 :
             /*Mandel Autre 2 */
            printf("dessin de Mandelbrot autre 2\n");
            fractale(2,-1,0,0);
            break;
            case 4 :
            /*Julia */
            printf("dessin de Julia\n");
            fractale(4,-1,0,0);
            break;
            case 5:
            printf("sortie du programme\n");
            exit(-1);
            break;
       			 }
                printf("j");
                SDL_Quit();
                return EXIT_SUCCESS;
                break;
		}
	}

    else if (strcmp(type_fractale,"Flamme") == 0){
        int reponse2;
    printf("Quelle fractale voulez vous dessiner ? \n");
    printf("1: Flamme Heart\n 2: Flamme Toupie \n 3: Flamme Horizon \n 4: Flamme hyperbolic \n  5: Quitter\n");
    scanf("%d",&reponse2);
	int **tab;
	
      switch(reponse2){
          while (reponse2!=0){
        case 1 :
            /*Flamme Heart */
            printf("dessin de la Flamme Heart\n");
            Heart(-1,0,0,tab);
        break;
        case 2 :
            /*Toupie */
            printf("dessin de la toupie\n");
            toupie(-1,0,0,tab);
        break;
        case 3 :
        printf("dessin de l'horizon\n");
            /*Horizon */
            horizon(-1,0,0,tab);
        break;
        case 4 :
            /*Hyperbolic */
        printf("dessin du Hyperbolic\n");
            Hyperbolic(-1,0,0,tab);
        break;
        case 5:
        printf("sortie du programme\n");
            exit(-1);
        break;
        }
        break;
   }
    }
    else if (strcmp(type_fractale,"IFS") == 0){
                int reponse2;
    printf("Quelle fractale voulez vous dessiner ? \n");
    printf("1: Forme\n 2: Feuille \n 3: Fougere \n 4: Triangle \n 5: Cactus \n 6: Arbre Noël \n 7: Arbre Hiver \n 8: Spirale \n 9: Arbre Printemps  \n 10: Quitter\n");
    scanf("%d",&reponse2);


      switch(reponse2){
          while (reponse2!=0){
        case 1 :
            baseIFS(1);
        break;
        case 2 :
             baseIFS(2);
        break;
        case 3 :
         baseIFS(3);
        break;
        case 4 :
             baseIFS(4);
        break;
        case 5 :
             baseIFS(5);
        break;
        case 6 :
             baseIFS(6);
        break;
        case 7 :
             baseIFS(7);
        break;
       case 8 :
             baseIFS(8);
        break;
       case 9 :
             baseIFS(9);
        break;
        case 10:
        printf("sortie du programme\n");
            exit(-1);
        break;
        }
        break;
   }
    }
     else if (strcmp(type_fractale,"Lsystem") == 0){
        int reponse2;
    printf("Quelle fractale voulez vous dessiner ? \n");
    printf("1: Courbe de Koch\n 2: Quadrature de Koch \n 3: Flocon de Koch \n 4: Cristal \n 5: Triangle \n 6: Anneau \n  7: Quitter\n");
    scanf("%d",&reponse2);


      switch(reponse2){
          while (reponse2!=0){
        case 1 :
            baseLSystem(1,-1,0,0);
        break;
        case 2 :
            baseLSystem(2,-1,0,0);
        break;
        case 3 :
            baseLSystem(3,-1,0,0);
        break;
        case 4 :
            baseLSystem(4,-1,0,0);
        break;
        case 5 :
            baseLSystem(5,-1,0,0);
        break;
        case 6 :
            baseLSystem(6,-1,0,0);
        break;
        case 7:
        printf("sortie du programme\n");
            exit(-1);
        break;
        }
        break;
   }
     }
	else if (strcmp(type_fractale,"video") == 0){
		printf("lancement de la video mandelbrot");
		system("totem mandelbrot.ogv");
	}
	else if (strcmp(type_fractale,"image") == 0){
		system("eog fractal_compilation.jpg");
	}
    else{
        printf("votre demande n'est pas conforme veuillez mettre un argument comme ceci: ./monprog Mandelbrot\n");
    }

return 0;
}


