#include <iostream>
#include <algorithm>

#define MAX 200002

long long total;
int a[MAX], L[MAX/2+1], R[MAX/2+1];

void merge(int *a, int p, int q, int r)
{
	int i, j, k, n1 = q-p+1, n2 = r-q;
	for(i = 0; i < n1; i++) L[i] = a[p+i];
	for(j = 0; j < n2; j++) R[j] = a[q+j+1];
	for(k = p, i = j = 0; k <= r; k++){
		if(j >= n2 || (i < n1 && L[i] <= R[j])) a[k] = L[i++];
		else{
			total += n1 - i;
			a[k] = R[j++];
		}
	}
}

void merge_sort(int *a, int start, int end)
{
	if(start < end){
		int mid = (start+end)/2;
		merge_sort(a, start, mid);
		merge_sort(a, mid+1, end);
		merge(a, start, mid, end);
	}
}

int main()
{
	int t, n, i;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		total = 0;
		for(i = 0; i < n; i++)scanf("%d", &a[i]);
		merge_sort(a, 0, n-1);
		printf("%lld\n", total); 
	}
	return 0;
}