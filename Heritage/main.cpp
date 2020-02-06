#include <stdlib.h>
#include <iostream>
#include "vect.h"
#include "vectok.h"
using namespace std;

int main(int argc, char* argv[])
{ // test 1
	vect vecteur(5);
	vecteur[1] = 10;
	cout << vecteur[1] << endl;

	//test 2
	//void fct(vectok);
	vectok v(6);

	int i;
	for (i = 0; i < v.taille(); i++) v[i] = i;
	cout << "vecteur v : ";
	for (i = 0; i < v.taille(); i++) cout << v[i] << " ";
	cout << "\n";
	vectok w(3);
	w = v;
	cout << "vecteur w : ";
	for (i = 0; i < w.taille(); i++) cout << w[i] << " ";
	cout << "\n";
}
/*void fct(vectok v)
{
	cout << "vecteur reçu par fct : " << "\n";
	int i;
	for (i = 0; i < v.taille(); i++) cout << v[i] << " ";
}*/
