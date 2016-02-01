#include <iostream>

int mcd(int, int);

int main()
{
	int u = 10;
	int v = 20;

	int maxComDiv = mcd(u, v);

	std::cout << maxComDiv << std::endl;

	return 0;
}

/*
 * @name: mcd
 * @params: numerator [u],
 *          divisor [v]
 * @description: Calculates the Maxmum-Common-Divisor
 * @return: integer [t || v]
 */
int mcd(int u, int v)
{
	int t;

	if (u < v) {
		t = u;
		u = v;
		v = t;
	}

	return v;
}