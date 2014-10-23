Pour compiler le projet : 
- placer le dossier fractal n'importe ou dans l'ordinateur
- rendez vous avec le terminal dans le dossier fractale
- pour compiler, tapper la commande make

Pour supprimer les fichier .0 :
-une fois dans le dossier, tapper make clean

Pour supprimer les fichier .0, l'executable, la doc et le dossier bin et doc :
-une fois dans le dossier, tapper make very-clean

Pour avoir la doc :
- une fois dans le dossier, tapper make doc

Pour lancer le programme entrer dans le répertoire bin du dossier fractale, puis taper :
- ./Fractale Flamme 		pour avoir le sous menu des fractales flammes
- ./Fractale Mandelbrot 	pour entrer dans le sous menu des fractales de type Mandelbrot/Julia
- ./Fractale Lsystem 		pour avoir le  sous menu des fractales L-System
- ./Fractale IFS 		pour avoir le sous menu des fractales de type IFS

Pour lancer une image bonus :
- ./Fractale image

Pour lancer une video bonus :
- ./Fractale video

libre à vous de naviguer dans les menus pour découvrir les fractales implémentées.

Enjoy it!
 
indication pour les fichiers de configurations :
1er nombre: taille horizontal de l'image
2eme nombre: taille vertical de l'image
3eme nombre: zoom de depart
4eme nombre: nombre d'iteration, ameliore la qualite en augmentant le nombre mais augmente le temps de calcul. Pour les L-system, ne pas prendre une valeur superieur a 5

zoom et deplacement des IFS:
quand vous vous deplacez ou que vous zoomez, faites en sorte qu'il y ait un maximum de points affiche, ainsi les calculs sont plus rapide. Si vous essayez d'avoir un ecran sans la fractale, le programme tournera a l'infini sans retour possible.