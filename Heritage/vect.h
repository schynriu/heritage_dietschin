#pragma once
class vect
{
	int nelem; //nombre d'�l�ments
	int * adr  // adresse zone dynamique 
public:
	vect(int); //constructeur (pr�cise la taille du vecteur)
	-vect(); //destructeur
	int & operator [] (int nb) ; //acc�s a un element par son indice


};
