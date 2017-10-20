/*
	nerdyninja
	BUGLIFE
	graph: bipartite
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

VI G[2010];
int color [2010];

bool bfs(int x)
{
	int i, j, k;
	queue<int> q;
	q.push(x);
	color[x] = 1;
	while(!q.empty()){
		x = q.front(); q.pop();
		j = G[x].size();
		for(i = 0; i < j; i++){
			k = G[x][i];
			if(color[k] == color[x])return false;
			if(!color[k]){
				color[k] = 3 - color[x];
				q.push(k);
			}
		}
	}
	return true;
}

int main()
{
	int i, j, x, y, t, nb, ni;
	scanf("%d", &t);
	for(int qq = 1; qq <= t; qq++){
		scanf("%d %d", &nb, &ni);
		for(i = 1; i <= nb; i++){G[i].clear(); color[i] = 0;}
		for(i = 0; i < ni; i++){
			scanf("%d %d", &x, &y);
			G[x].push_back(y); G[y].push_back(x);
		}
		for(i = 1; i <= nb; i++){
			if(!color[i]){
				if(bfs(i))continue;
				else break;
			}
		}
		printf("Scenario #%d:\n", qq);
		if(i > nb)printf("No suspicious bugs found!\n");
		else printf("Suspicious bugs found!\n");
	}
	return 0;
}