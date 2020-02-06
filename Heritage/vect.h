#pragma once
class vect
{
	int nelem; //nombre d'éléments
	int * adr  // adresse zone dynamique 
public:
	vect(int); //constructeur (précise la taille du vecteur)
	-vect(); //destructeur
	int & operator [] (int nb) ; //accès a un element par son indice


};
