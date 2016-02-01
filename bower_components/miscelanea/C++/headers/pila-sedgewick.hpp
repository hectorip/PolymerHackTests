struct nodo {
	float clave;
	struct nodo * siguiente;
};

typedef nodo Nodo;

class Pila {
public:
	Pila(int);
	~Pila();
	void meter(float);
	float sacar();
	int vacia();
private:
	Nodo * cabeza;
	Nodo * z;
};