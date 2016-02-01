void selection (int arr[], int N)
{
	int i;
	int j;
	int min;

	for(i = 1; i < N; i++) {
		min = i;
		for(j = i+1; j <= N; j++) {
			if (arr[j] < a[min])
				min = j;
			
			swap(arr, j, i)
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