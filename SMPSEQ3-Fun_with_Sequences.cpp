// PRoblem link- http://www.spoj.com/problems/SMPSEQ3/

#include<iostream>
using namespace std;
int main(void)
{
	int n,s;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	cin>>s;
	int arr2[s];
	for(int a=0;a<s;a++)
	{
		cin>>arr2[a];
	}
	for(int b=0;b<n;b++)
	{
		for(int c=0;c<s;c++)
		{
			if(arr1[b]==arr2[c])
			{
				arr1[b]=-101; //label all arr1 elemets to -101
				              //such that further if any element
				              //of arr1 not equal to -101 we will
				              //output it.
			}
		}
	}
	for(int d=0;d<m;d++)
	{
		if(arr1[d]!=-101)
		{
			cout<<arr1[d]<<endl;
		}
	}
}

/* Sample Input:
5
-2 -1 0 1 4
6
-3 -2 -1 1 2 3

Sample Output:
0 4
*/
