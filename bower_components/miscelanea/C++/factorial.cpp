#include <iostream>

int factorial(int);

int main()
{
	int result = factorial(5);

	return 0;
}

int factorial(int num)
{
	if (num == 0)
		return 1;

	return num * factorial(num-1);
}