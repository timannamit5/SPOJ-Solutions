
/*
	nerdyninja
	BINSTIRL
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
	int tt;
	scanf("%d", &tt);
	for(int qq = 1; qq <= tt; qq++){
		ll n,m;
		scanf("%lld %lld", &n, &m);
		if(((n-m)&((m-1)/2)) == 0)printf("1\n");
		else printf("0\n");
	}
    return 0;
}