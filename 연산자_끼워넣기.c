#include <stdio.h>
int n;
int min = 1000000001;
int max = -1000000001;
int arr[12];
void DFS(int plus, int minus, int mult, int div, int x, int sum)
{
	if (x == n - 1)
	{
		if (max < sum)
			max = sum;
		if (min > sum)
			min = sum;
	}
	if (plus > 0)
		DFS(plus - 1, minus, mult, div, x + 1, sum + arr[x + 1]);
	if (minus > 0)
		DFS(plus, minus - 1, mult, div, x + 1, sum - arr[x + 1]);
	if (mult > 0)
		DFS(plus, minus, mult - 1, div, x + 1, sum * arr[x + 1]);
	if (div > 0)
		DFS(plus, minus, mult, div - 1, x + 1, sum / arr[x + 1]);
}

int main()
{
	int plus, minus, mult, div, i;
	scanf("%d", &n);
	i = 0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d %d %d %d", &plus, &minus, &mult, &div);
	DFS(plus, minus, mult, div, 0, arr[0]);
	printf("%d\n%d", max, min);
}
