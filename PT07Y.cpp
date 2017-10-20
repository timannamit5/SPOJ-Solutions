/*
	nerdyninja
	PT07Y
	graph: dfs
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

int dfs(VI g[], ll x, ll n) 
{
	int visited[n+1];
	stack <ll> s;
	REP(i, 0, n+1)visited[i] = 0;
	s.push(x);
	ll count = 0;
	while(!s.empty()){
		count++;
		ll v = s.top();
		s.pop();
		if(visited[v])return 0;
		else{
			visited[v] = 1;
			REP(i, 0, g[v].size()){
				s.push(g[v][i]);
			}
		}
	}
	if(count != n)return 0;
	else return 1;
}

int main()
{
	ll n, m;
	scanf("%lld %lld", &n, &m);
	VI g[10010];
	REP(j, 0, m){
		ll u, v;
		scanf("%lld %lld", &u, &v);
		g[u].push_back(v);
	}
	if(m+1 == n){
		if(dfs(g, 1, n))printf("YES\n");
		else printf("NO\n");			
	}
	else printf("NO\n");
	return 0;
}