#include "../headers.hpp"

Pila::Pila(int MAX = 10)
{
	cabeza = new Nodo;
	cabeza->siguiente = z;
	z->siguiente = z;
}

Pila::~Pila()
{
	Nodo * t = cabeza;

	while (t != z) {
		cabeza = t;
		t = t->siguiente;

		delete cabeza;
	}
}

void Pila::meter(float v)
{
	Nodo * t = new nodo;
	t->clave = v;
	t->siguiente = cabeza->siguiente;
	cabeza->siguiente = t;
}

float Pila::sacar()
{
	float x;
	Nodo * t = cabeza->siguiente;
	cabeza->siguiente = t->siguiente;
	x = t->clave;

	delete t;
	return x;
}

int PIla::vacia()
{
	return cabeza->siguiente == z;
}