#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	// Files and columns
	int m;
	int n;

	int i = 1;
	int count = 1;

	int x = 1;
	int y;

	int t = 1;
	int z;
	int b;

	// Magic Cube
	int arr[15][15] = {};

	printf("Dame dos numeros impares: ");
	scanf("%d%d", &m, &n);

	z = m * n;
	b = (m / 2) + 1;

	while(true) {
		if(arr[i][b] != 0) {
			i += 2;
			b -= 1;
		}

		arr[i][b] = count;
		i--;
		b++;
		count++;

		if(count == z+1) {
		 	for(x = 1; x <= m; x++) {
		 		for(y = 1;y <= n; y++) {
		 			printf("%4d", arr[x][y]);
				}

				putchar('\n');
			}

		  return -1;
		}

		if(i == 0 && b == m+1) {
			i += 2;
			b -= 1;
		} else if(i == 0) {
			i = n;
		} else if(b == m+1) {
			b = t;
		}
	}

	return 0;
}