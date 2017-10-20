/*
	nerdyninja
	MADODDSUM
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

int main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	ll a, b;
	scanf("%lld %lld", &a, &b);
	if(a == b && a%2 == 0)printf("0\n");
	else{
		if(a%2 == 0)a++;
		ll n = ((b-a)/2)+1;
		printf("%lld\n", (n*(2*a + (n-1)*2))/2);
	}
	return 0;
}