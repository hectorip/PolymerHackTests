void sort (int a[], int izq, int der)
{
	int i;
	if (der > izq) {
		i = partition(a, izq, der);
		sort(a, izq, i-1);
		sort(a, i+1, der);
	}
}