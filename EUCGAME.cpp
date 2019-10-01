// solution for problem https://pl.spoj.com/problems/EUCGAME/
#include <iostream>

using namespace std;

struct Token{
    unsigned int a,b;
};

int NWD(int a, int b)
{
    if(b!=0)
    	return NWD(b,a%b);
	
    return a;
}

unsigned int count(Token z){
    return 2*NWD(z.a, z.b);
}

int main(){
    int t;
    Token* tab;

    cin >> t;
    tab = new Token[t];

    for(int i = 0; i < t; i++) {
        cin >> tab[i].a >> tab[i].b;
    }

    for(int i = 0; i < t; i++) {
        cout << count(tab[i]) << endl;
    }

    return 0;
}