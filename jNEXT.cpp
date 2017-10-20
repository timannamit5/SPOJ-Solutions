#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
void swap(int *a, int *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{ int t,n,smallest,x,i,j;
scanf("%d",&t);
while(t>0)
{scanf("%d",&n);
int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for (i = n-1; i > 0; i--)
        if (a[i] > a[i-1])
           break;
 
     if (i==0)
    {
        cout << -1<<endl;
    }
 
   else 
   {x = a[i-1];smallest = i;
    for (j = i+1; j < n; j++)
        if (a[j] > x && a[j] < a[smallest])
            smallest = j;
 
    swap(&a[smallest], &a[i-1]);
 
  sort(a + i, a + n);
 for(i=0;i<n;i++)
    cout << a[i];
    cout<<"\n";
    }
    t--;
}
    return 0;
}
