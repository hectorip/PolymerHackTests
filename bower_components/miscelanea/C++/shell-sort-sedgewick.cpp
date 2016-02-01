void shell(int a[], int N)
{
	int i;
	int j;
	int h;
	int v;

	for (h = 1; h <= N/9; 3*h+1) ;
	for ( ; h > 0; h /= 3) {
		for (i = h+1; i <= N; i += 1) {
			v = a[i];
			j = i;

			while (j > h && a[j-h] > v) {
				a[j] = a[j-h];
				j -= h;
			}

			a[j] = v;
		}
	}
}