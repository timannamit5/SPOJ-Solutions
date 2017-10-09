#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i = 0; i < n; i++)cin>>a[i];
	for(int i = 0; i < n; i++)cin>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	int sum = 0;
	for(int i = 0; i < n; i++)sum += a[i]*b[i];
	printf("%d\n", sum); 
    }
    return 0;
}
