/*
	nerdyninja
	FCTRL
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
	int T;
	scanf("%d", &T);
	while(T--)
	{
		ll N;
		scanf("%lld", &N);
		ll ans = 0;
		while(N)
		{
			ans += N/5;
			N /= 5;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
