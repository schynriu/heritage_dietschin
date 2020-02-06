#include "vect.h"
#include <corecrt_malloc.h>

vect::vect(int a)
{
	this->nelem = a;
	//this->adr = new int[a];
	this->adr = (int*)malloc(a * sizeof(int));
	for (int i = 0; i < a; i++) {
		this->adr[i] = 0;
	}
}

int& vect::operator[](int nelem)
{
	return vect::adr[nelem - 1];
}

vect::~vect() {
	free(this->adr);
	this->adr = NULL;
}