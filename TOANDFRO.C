#include <iostream>
#include <algorithm>

int main()
{
	int n, i, j;
	char x[210];
	while(scanf("%d", &n) == 1 && n != 0){
		scanf("%s", x);
		int l = strlen(x);
		int parts = l/n;
		char s[parts][n];
		int k = 0;
		for(i = 0; i < parts; i++){
			if(i%2 == 0){
				for(j = 0; j < n; j++){
					s[i][j] = x[k];
					k++;
				}
			}
			else{
				for(j = n-1; j >= 0; j--){
					s[i][j] = x[k];
					k++;
				}
			}
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < parts; j++){
				printf("%c", s[j][i]);
			}
		}
		printf("\n");
	}
	return 0;
}