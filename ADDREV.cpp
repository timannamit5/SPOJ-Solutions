/*
	nerdyninja
	ADDREV
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

int rev(int n)
{
	int r = 0;
	while(n)
	{
		r *= 10;
		r += n%10;
		n /= 10;
	}
	return r;
}

int main()
{
	int N;
	scanf("%d", &N);
	while(N--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", rev(rev(a) + rev(b)));
	}
	return 0;
}
