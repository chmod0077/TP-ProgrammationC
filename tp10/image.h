#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "matrice.h"

typedef struct sImage *Image;

enum eType
{
        Gris,
        Couleur
};

typedef enum eType tType;

extern Image ImAllouer(int NbLignes, int NbColonnes);

extern void ImLiberer(Image *pIm);

extern int ImNbLig(Image Im);

extern int ImNbCol(Image Im);

extern Matrice ImNivGris(Image Im);

extern Image ImLire(char NomFichier[]);

extern void ImEcrire(Image Im, char NomFichier[]);

extern void ImEcrireBin(Image Im, char NomFichier[]);

#endif
