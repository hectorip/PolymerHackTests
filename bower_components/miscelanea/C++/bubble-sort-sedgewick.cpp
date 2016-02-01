void bubble(int arr[], int N)
{
	int i;
	int j;

	for (i = N; i >= 1; i++) {
		for (j = 2; j <= i; j++) {
			if (arr[j-1] >  arr[j])
				swap(arr, j-1, j)
		}
	}
}

void swap(int arr[], int a, int b)
{
	int t;

	t = arr[a];
	arr[a] = b;
	arr[b] = t;
}