/*
 * @description: Implementación de la variación de la 
 * lista enlazada propuesta por Robert Sedgewick
 * utilizando apuntadores "tontos" (auto-referencia).
 */
#include <iostream>
using namespaces std;

struct nodo {
	int valor;
	struct nodo * siguiente;
};

typedef Nodo nodo;

int main(void)
{
	Nodo * cabeza;
	Nodo * final;

	cabeza = new Nodo;
	final = new Nodo;

	cabeza->siguiente = final;
	final->siguiente = final;

	/*
	 * Metodos para insertar, buscar y eliminar pendientes.
	 */

	return 0;
}