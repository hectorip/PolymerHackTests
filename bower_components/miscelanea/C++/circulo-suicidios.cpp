/*
 * @description: N personas han decidido cometer suicidio,
 * disponiéndose en un circulo y matando a la M-esima persona
 * al rededor del circulo, cerrando filas a medida que
 * cada persona va abandonando el circulo.
 */
#include <iostream>
using namespace std;

struct nodo {
	int valor;
	struct nodo * siguiente;
};

typedef struct nodo Nodo;

int main()
{
	int iter;
	int N;
	int M;

	Nodo * t;
	Nodo * x;

	cin >> N >> M;

	t = new Nodo;
	t->valor = 1;
	x = t;

	for (iter = 2; iter <= N; iter++) {
		t->siguiente = new Nodo;
		t = t->siguiente;
		t->valor = iter;
	}

	t->siguiente = x;

	while (t != t->siguiente) {
		for (iter = 1; iter < M; iter++)
			t = t->siguiente;

		cout << t->siguiente;
		t->siguiente = x->siguiente;

		delete x;
	}

	cout << t->valor << endl;
}