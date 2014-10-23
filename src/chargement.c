#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <time.h>
#include "chargement.h"

/** \file chargement.c
* \author Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \brief Permet le chargement d'un fichier de fractale
* \date 14 Novembre 2011
*/


/*! \fn void chargement(char chaine[],int *val1,int *val2,int *val3);
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 14 Novembre 2011
* \brief Permet de charger un fichier
* \param chaine[] contient le nom du fichier de configuration
* \param val1 pointeur vers image_x
* \param val2 pointeur vers image_y
* \param val3 pointeur vers zoom
*/
void chargement(char chaine[],int *val1,int *val2,int *val3){
    FILE* fichier = NULL;
    fichier = fopen(chaine, "r");


    if (fichier != NULL)
    {

       fscanf(fichier,"%d %d %d",val1,val2,val3);
       fclose(fichier);

    }

}

/*! \fn void chargementModif(char chaine[],int *val1,int *val2,int *val3);
* \author  Florian Chaulet Frederic Torcheux Pauline de Bouet du Portal.
* \version 0.1
* \date 3 Janvier 2012
* \brief Permet de charger un fichier
* \param chaine[] contient le nom du fichier de configuration
* \param val1 pointeur vers image_x
* \param val2 pointeur vers image_y
* \param val3 pointeur vers zoom
* \param val4 pointeur vers le nombre d'iteration
*/
void chargementModif(char chaine[],int *val1,int *val2,int *val3, int *val4){
    FILE* fichier = NULL;
    fichier = fopen(chaine, "r");

    if (fichier != NULL)
    {
       fscanf(fichier,"%d %d %d %d",val1,val2,val3,val4);
       fclose(fichier);
    }


}
