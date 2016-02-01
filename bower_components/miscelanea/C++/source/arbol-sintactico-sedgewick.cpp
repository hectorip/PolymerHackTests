#include "../headers.pila-sedgewick.hpp"

struct nodo {
	char info;
	struct nodo * izq;
	struct nodo * der;
};

typedef struct nodo Nodo;

int main()
{
	Nodo * x;
	Nodo * z;
	char c;
	Pila pila(50);

	z = new Nodo;
	z->izq = z;
	z->der = z;

	while (cin.get(c)) {
		while (c == ' ')
			cin.get(c);

		x = new Nodo;
		x->info = c;
		x->izq = z;
		x->der = z;

		if (c == '+' || c == '*') {
			x->der = pila.sacar();
			x->izq = pila.sacar();
		}

		pila.meter(x);
	}

	return 0;
}