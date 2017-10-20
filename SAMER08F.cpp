/*
	nerdyninja
	SAMER08F
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
	ll N;
	while(scanf("%lld", &N) == 1 && N != 0)
	{
		printf("%lld\n", (N * (N+1) * (2*N + 1)) / 6);
	}
	return 0;
}
