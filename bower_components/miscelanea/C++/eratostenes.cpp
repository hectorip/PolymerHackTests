/*
 * @description: Shows the first N prime numbers
 */
#include <iostream>

int main()
{
	const int NUM = 100;

	int iter;
	int inner;
	bool array[NUM+1];

	array[0] = true;

	for (iter = 2; iter <= NUM; iter++) {
		array[iter] = true;
	}

	for (iter = 2; iter <= NUM/2; iter++) {
		for (inner = 2; inner <= NUM/iter; inner++) {
			array[iter*inner] = false;
		}
	}

	for (iter = 1; iter <= NUM; iter++) {
		if (array[iter]) {
			std::cout << iter << " ";
		}
	}

	std::cout << std::endl;

	return 0;
}