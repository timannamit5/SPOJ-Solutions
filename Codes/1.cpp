#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>


int binary_search(int a[], int start, int end, int query)
{
	int mid = (start+end)/2;

	if(start == end)
		return mid;

	else if(a[mid] > query)
	{	
		binary_search(a, 0, mid-1, query);}

	else if(a[mid] < query)
		{
		binary_search(a, mid+1, end , query);}

	else
		return mid;
}

int minimum(int a, int b)
{	return (a>b)?b:a;}

int maximum(int a, int b)
{	return (a>b)?a:b;}


int main()
{

	int ans[100005], cities[100005], tower[100005];
	int n, m, i;
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++)
	{
		scanf("%d", &cities[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d", &tower[i]);
	}


	
	int min, index;	
	for(i=0;i<n;i++)
	{

		int city = cities[i];
		index = binary_search(tower, 0, m-1, city);

		//cout << "index is " << index << endl;
		if(index != 0 && index != m-1)
			//min = minimum(cities[index], minimum(cities[index+1], cities[index-1]));
		{
			min = 	minimum(abs(city-tower[index]), minimum(abs(city-tower[index+1]), abs(city-tower[index-1])));
		}
		else if(index == 0 && index != m-1)
			min = minimum(abs(city-tower[index]), abs(city-tower[index+1]));
		else if(index == m-1 && index != 0)
			min = minimum(abs(city-tower[index]), abs(city-tower[index-1]));
		else
			min = abs(city-tower[index]);

		ans[i] = min;
	}
	int max = INT_MIN;

	for(i=0;i<n;i++)
	{
		max = maximum(max, ans[i]);
	}

	printf("%d\n", max);

	// int a[15] = {2, 4 , 6, 9, 12, 45, 56, 67, 78, 89, 90, 100, 105, 111, 123};
	// int inp;
	// cin >> inp;
	// cout << a[binary_search(a, 0, 14, inp)] << endl;

	return 0;
}