/*
	nerdyninja
	NSTEPS
	adhoc
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

int main()
{
	int N;
	scanf("%d", &N);
	while(N--)
	{
		int x,y;
		scanf("%d %d", &x, &y);
		if(x%2 == 0 && y%2 == 0 && x-y == 2)printf("%d\n", x+y);
		else if(x%2 == 0 && y%2 == 0 && x == y)printf("%d\n", x+y);
		else if(x%2 != 0 && y%2 != 0 && x-y == 2)printf("%d\n", x+y-1);
		else if(x%2 != 0 && y%2 != 0 && x == y)printf("%d\n", x+y-1);
		else printf("No Number\n");
	}	
	return 0;
}
