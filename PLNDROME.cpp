/*
	nerdyninja
	PLNDROME
	adhoc
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define PB push_back
#define MP make_pair

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<ll> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

int check(char *x, int l, int s, char c)
{
	x[s-1] = c;
	printf("%s\n", x);
	for(int i = 0, j = l-1; i <= l/2; i++, j--){
		if(x[i] != x[j])return 0;
	}
	return 1;
}

int main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	int tt;
	scanf("%d", &tt);
	REP(qq, 0, tt){
		int n; char s[n]; scanf("%d %s", &n, s);
		int l = strlen(s);
		int q, x; char c;
		scanf("%d", &q);
		printf("Case #%d:\n", qq+1);
		while(q--){
			scanf("%d %c", &x, &c);
			if(check(s, l, x, c))printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}