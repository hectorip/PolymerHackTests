#include <iostream>

class Pila
{
public:
	Pila(int MAX = 10)
	{
		pila = new char [max];
		p = 0;
	}

	~Pila()
	{
		delete pila;
	}

	void meter(char v)
	{
		pila[p++] = v;
	}

	char sacar()
	{
		return pila[p--];
	}

	int vacia()
	{
		return !p;
	}
private:
	char * pila;
	int p;
};

int main()
{
	char c;
	Pila acc(50);
	int x;

	while (cin.get(c)) {
		if (c == ')') {
			cout.put(acc.sacar())
		}
		if (c == '+')
			x = acc.sacar() + acc.sacar();
		if (c == '*')
			x = acc.sacar() * acc.sacar();

		while (c >= '0'&& c <= '9') {
			cout.put(c);
			cin.get(c);
		}

		if (c != '(') {
			cout << ' ';
		}
	}

	cout << endl;

	return 0;
}