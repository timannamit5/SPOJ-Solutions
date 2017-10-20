/*
	roh_7
	dp
	COINS
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
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

map<int , ll> ans;
ll chutta(ll n);

int main()
{
	ll n;
	while(cin>>n)
	{
		cout<<chutta(n)<<endl;
	}
	return 0;
}

ll chutta(ll n)
{
	ll sum=0;
	if(n==0)
		return 0;
	if(ans[n]!=0)
		return ans[n];

	
		sum=(chutta(n/2)+chutta(n/3)+chutta(n/4));
	
	if(sum>n)
		ans[n]= sum;
	else ans[n]=n;
	return ans[n];
}