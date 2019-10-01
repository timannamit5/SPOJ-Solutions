// solution for problem https://pl.spoj.com/problems/PTCLTZ/
#include <iostream>

using namespace std;

long long int brute(int p) {
    long long int n = 0;
    if(p == 1){
        return n;
    }

    else{
        
        while(p != 1){
            if(p % 2 == 1){
                p = 3*p + 1;
            }

            else{
                p = p/2;
            }
            n++;
        }
    }

    return n;
}

int main(void) {
    int s;
    int *tab;

    cin >> s;
    tab = new int[s];

    for(int i = 0; i < s; i++) {
        cin >> tab[i];
    }

    for(int i = 0; i < s; i++) {
        cout << brute(tab[i]) << endl;
    }
    return 0;
}