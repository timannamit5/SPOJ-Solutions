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
	ll a,b,c;
	while(scanf("%lld %lld %lld", &a, &b, &c) == 3 && a|b|c)
	{
		if(b-a == c-b)printf("AP %lld\n", 2*c - b);
		else printf("GP %lld\n", c*c/b);
	}
	return 0;
}
