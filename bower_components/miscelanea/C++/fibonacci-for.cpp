#include <iostream>

int fibonacci(int);
const int MAX = 25;

int main()
{
	int resultado = fibonacci(MAX);

	return 0;
}

int fibonacci(int num)
{
	int iter;
	int fib[MAX];

	fib[0] = 1;
	fib[1] = 1;

	for (iter = 2; iter < MAX; iter++)
		fib[iter] = fib[iter-1] + fib[iter-2];

	return fib[num];
}