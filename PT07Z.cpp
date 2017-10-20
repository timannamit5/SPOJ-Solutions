/*
	nerdyninja
	PT07Z
	graph: dfs
*/
#include <bits/stdc++.h>

using namespace std;

#define MAX 100001
bool dfs_num[MAX] = {false};
int ans = 0;

int dfs(vector<int> v[], int u)
{
	dfs_num[u] = 1;
	int m, m1 = -1, m2 = -1;
	for(int i = 0; i < v[u].size(); i++){
		int e = v[u][i];
		if(dfs_num[e] != 1){
			m = dfs(v, e);
			if(m >= m1){
				m2 = m1;
				m1 = m;
			}
			else if(m > m2){
				m2 = m;
			}
		}
	}
	ans = max(ans, m1+m2+2);
	return (m1+1);
}
int main()
{
	int n;
	scanf("%d", &n);
	int x, y;
	vector<int> v[n+1];
	for(int i = 1; i < n; i++) {
		scanf("%d%d", &x, &y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(v, 1);
	printf("%d\n", ans);
	return 0;
}