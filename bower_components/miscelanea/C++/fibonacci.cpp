#include <iostream>

int fibonacci(int);

int main()
{
	int result = fibonacci(5);

	return 0;
}

int fibonacci(int num)
{
	if (num <= 1)
		return 1;

	return fibonacci(num-1) + fibonacci(n-2);
}