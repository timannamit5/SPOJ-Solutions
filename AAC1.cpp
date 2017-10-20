/*
	nerdyninja
	AAC1
	graph: dijkstra
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
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 100010

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;

vii G[MAX];
int d[MAX], e[MAX];

void solution(int n, int m)
{
	int i, j, u, v, b, a;
	for(int i = 0; i <= n; i++){
		G[i].clear();
		d[i] = INF;
		e[i] = 0;
	}
	while(m--){
		scanf("%d %d", &u, &v);
		G[u].push_back(pii(1, v));
		G[v].push_back(pii(1, u));
	}
	d[1] = 0;
	priority_queue< pii, vector< pii >, greater< pii > > Q;
	Q.push(pii(0, 1));

	while(!Q.empty()) {
		u = Q.top().second;
		b = Q.top().first;
		Q.pop();
		int size = G[u].size();
		for(i = 0; i < size; i++){
			v = G[u][i].second;
			a = G[u][i].first;
			if(e[v] == 0 && b + a <= d[v]) {
				d[v] = b+a;
				Q.push(pii(d[v], v));
			}
		}
		e[u] = 1;
		if(u == n) break;
	}
	printf("%d\n", d[n]);
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		solution(n, m);
	}
	return 0;
}