#include "../cola-sedgewick.hpp"

Cola::Cola(int MAX)
{
	talla = MAX;
	cabeza = rabo = 0;
}

void Cola::poner(float v)
{
	cola[rabo++] = v;
	if (rabo > talla)
		rabo = 0;
}

float Cola::obtener()
{
	float t = cola[cabeza++];

	if (cabeza > talla)
		cabeza = 0;

	return t;
}

int Cola::vacia()
{
	return cabeza == rabo;
}