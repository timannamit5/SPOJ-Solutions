/*
	nerdyninja
	SMPDIV
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

	int tt;
	scanf("%d", &tt);
	REP(qq, 0, tt){
		int n, x, y;
		scanf("%d %d %d", &n, &x, &y);
		for(int i = 1; ;i++){
			if(x*i < n){
				if(x*i % y != 0)printf("%d ", x*i);
			}
			else break;
		}
		printf("\n");
	}
	return 0;
}