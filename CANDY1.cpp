/*
	nerdyninja
	ACPC10A
	math
*/
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <bitset>

using namespace std;

typedef long long ll;

int main()
{
	int N;
	while(scanf("%d", &N) == 1 && N != -1)
	{
		int a[N];
		int total = 0;
		for(int i = 0; i < N; i++){
			scanf("%d", &a[i]);
			total += a[i];
		}
		int sum = 0;
		if(total%N == 0){
			total /= N;
			sort(a, a+N);

			for(int i = N-1; i >= 0; i--){
				if(a[i] > total){
					sum += a[i] - total;
				}
				else break;
			}
			printf("%d\n", sum);
		}
		else{
			printf("-1\n");
		}
	}
	return 0;
}
