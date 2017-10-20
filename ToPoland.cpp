#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int N = 1e5;  // limit for array size
int z, n, ballonNumber,q,k;
char c[10];
  // array size
int t[2 * N];

int max (int a, int b)
{
  return ((a > b)? a : b);
}

void build() {  // build the tree
  for (int i = n - 1; i > 0; --i) t[i] = max(t[i<<1], t[i<<1|1]);
}

void modify(int p, int value) {
  for (t[p += n] = value; p >>= 1; ) t[p] = max(t[p<<1], t[p<<1|1]);
}

int query(int l, int r) {
  int resl=0, resr=0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) resl = max(resl, t[l++]);
    if (r&1) resr = max(t[--r], resr);
  }
  return max(resl, resr);
}



int main(int argc, char const *argv[])
{
    scanf ("%d", &z);
    int cont = 0;
    for (int i = 0; i < z; ++i)
    {
        if (cont)
        {
            printf("\n");
        }
        printf("Testcase %d:\n",cont );
        scanf("%d %d", &n, &ballonNumber);

        for (int i = 0; i < n; ++i) 
            scanf("%d", t + n + i);
        build();
        scanf ("%d", &q);
        for (int i = 0; i < q; ++i)
        {
            scanf ("%s", c);
            if (strcmp ("A",c)==0)
            {
                scanf ("%d", &k);
                ballonNumber=ballonNumber+k;
            }
            else if (strcmp ("B",c)==0)
            {
                int a;
                scanf("%d %d", &k, &a);
                modify(k,a);

            }
            else
            {
                int a,b;
                scanf ("%d %d", &a,&b);
                printf("%d\n", abs (ballonNumber - query(a, b+1)));
            }
        }
        cont++;
    }
    
    return 0;
}