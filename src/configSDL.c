#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <time.h>
#include "configSDL.h"

/** \file configSDL.c
* \author Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \brief fichier regroupant les fonctions utiles a tous les autres fichiers
* \date 14 Novembre 2011
*/

/*! \fn SDL_Surface * initialisationPixel(SDL_Surface *pixel)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Créé une surface de type rectangle qui forme un pixel
* \param pixel surface qui forme un pixel
*/

SDL_Surface * initialisationPixel(SDL_Surface *pixel){
	pixel = SDL_CreateRGBSurface(SDL_HWSURFACE, 1, 1,32, 0, 0, 0, 0);
    	SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, 50, 200, 0));
	return pixel;
}
/*! \fn void libererMem2(SDL_Surface *ecran, SDL_Surface *pixel)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Libere la donnée surface et la donnée pixel
* \param ecran surface ecran
* \param pixel surface pixel
*/

void libererMem2(SDL_Surface *ecran, SDL_Surface *pixel){
    SDL_FreeSurface(pixel);
    SDL_FreeSurface(ecran);
}
/*! \fn void libererMem(SDL_Surface *ecran, SDL_Surface *pixel)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Libere la donnée surface et la donnée pixel
* \param ecran surface ecran
* \param pixel surface pixel
*/
void libererMem(SDL_Surface *ecran, SDL_Surface *pixel){

    SDL_FreeSurface(pixel);
    SDL_FreeSurface(ecran);
}
/*! \fn void pause();
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief met en pause SDL
*/

void pause(){
    int continuer = 1;
    SDL_Event event;

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}
/*! \fn SDL_Surface * initialisationEcran(SDL_Surface *ecran,int image_x,int image_y)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Créé une surface de type rectangle que l'on assimilera à un ecran
* \param ecran
* \param image_x taille de la fenetre  SDL en abscisse
* \param image_y taille de la fenetre  SDL en ordonnée
*/

SDL_Surface * initialisationEcran(SDL_Surface *ecran,int image_x,int image_y){
	SDL_Init(SDL_INIT_VIDEO);
    	ecran = SDL_SetVideoMode(image_x, image_y, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	SDL_WM_SetCaption("Fractale", NULL);
	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
	return ecran;
}
/*! \fn void libererPix(SDL_Surface *pixel)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Libere la donnée pixel
* \param pixel surface pixel
*/
void libererPix(SDL_Surface *pixel){
    SDL_FreeSurface(pixel);
}
/*! \fn SDL_Surface * initialisationEcranTitre(SDL_Surface *ecran,int image_x,int image_y, char *titre)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Créé une surface de type rectangle que l'on assimilera à un ecran avec ajout d'un titre
* \param ecran
* \param image_x taille de la fenetre  SDL en abscisse
* \param image_y taille de la fenetre  SDL en ordonnée
* \param titre titre de la fenetre
*/
SDL_Surface * initialisationEcranTitre(SDL_Surface *ecran,int image_x,int image_y, char *titre){
	SDL_Init(SDL_INIT_VIDEO);
    ecran = SDL_SetVideoMode(image_x, image_y, 32, SDL_HWSURFACE);
	SDL_WM_SetCaption(titre, NULL);
	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
	return ecran;
}
/*! \fn SDL_Surface * initialisationEcranTitreCouleur(SDL_Surface *ecran,int image_x,int image_y, char *titre, int r, int g, int b)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Créé une surface de type rectangle que l'on assimilera à un ecran avec ajout d'un titre
* \param ecran
* \param image_x taille de la fenetre  SDL en abscisse
* \param image_y taille de la fenetre  SDL en ordonnée
* \param titre titre de la fenetre
* \param r valeur de rouge en fond d'ecran
* \param g valeur de vert
* \param b valeur de bleu
*/
SDL_Surface * initialisationEcranTitreCouleur(SDL_Surface *ecran,int image_x,int image_y, char *titre, int r, int g, int b){
	SDL_Init(SDL_INIT_VIDEO);
    ecran = SDL_SetVideoMode(image_x, image_y, 32, SDL_HWSURFACE);
	SDL_WM_SetCaption(titre, NULL);
	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, r, g, b));
	return ecran;
}
/*! \fn SDL_Surface * initialisationPixelCouleur(SDL_Surface *pixel, int r, int g, int b)
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Créé une surface de type rectangle qui forme un pixel
* \param pixel surface qui forme un pixel
* \param r valeur de rouge du pixel
* \param g valeur de vert
* \param b valeur de bleu
*/
SDL_Surface * initialisationPixelCouleur(SDL_Surface *pixel, int r, int g, int b){
	pixel = SDL_CreateRGBSurface(SDL_HWSURFACE, 1, 1,32, 0, 0, 0, 0);
    	SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format, r, g, b));
	return pixel;
}
