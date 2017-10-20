/*
	nerdyninja
	ARRAYSUB
	number theory: sliding window
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

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

void solve(int a[], int n, int k)
{
	int i;
	deque<int> q(k);
	for(i = 0; i < k; ++i) {
		while((!q.empty()) && a[i] >= a[q.back()])
			q.pop_back();
		q.push_back(i);
	}
	for( ; i < n; ++i) {
		printf("%d ", a[q.front()]);
		while((!q.empty()) && q.front() <= i-k)
			q.pop_front();
		while((!q.empty()) && a[i] >= a[q.back()])
			q.pop_back();
		q.push_back(i);
	}
	printf("%d\n", a[q.front()]);
}

int main()
{
	int n, k;
	while(scanf("%d", &n) == 1){
		int a[n];
		for(int i = 0; i < n; i++)scanf("%d", &a[i]);
		scanf("%d", &k);
		solve(a, n, k);
	}
	return 0;
}