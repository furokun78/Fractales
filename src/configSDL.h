#ifndef DEF_CONFIGSDL
#define DEF_CONFIGSDL

void pause();
SDL_Surface * initialisationEcran(SDL_Surface *ecran,int image_x,int image_y);
SDL_Surface * initialisationPixel(SDL_Surface *pixel);
void libererMem(SDL_Surface *ecran, SDL_Surface *pixel);
void libererPix(SDL_Surface *pixel);
SDL_Surface * initialisationPixelCouleur(SDL_Surface *pixel, int r, int g, int b);
SDL_Surface * initialisationEcranTitre(SDL_Surface *ecran,int image_x,int image_y, char *titre);
SDL_Surface * initialisationEcranTitreCouleur(SDL_Surface *ecran,int image_x,int image_y, char *titre, int r, int g, int b);
void libererMem2(SDL_Surface *ecran, SDL_Surface *pixel);

#endif


