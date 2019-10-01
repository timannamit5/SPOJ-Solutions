// solution for problem https://pl.spoj.com/problems/GLUTTON/
#include <iostream>
#include <math.h>

using namespace std;

typedef unsigned int number;


class Obzartuchy{
	private:
		number n;
		number m;
		number *tab;
		
		const number doba = 86400;
	
	public:
		void getData(){
			cin >> n;
	
			cin >> m;
	
			tab = new number[n];
	
			for(number i = 0; i < n; i++){
				cin >> tab[i];
			}
		}

		number cookies(){
			number ret = 0;
	
			for(number i = 0; i < n; i++){
				ret += doba / tab[i];
			}
	
			return ret;
		}

		number boxes(){
			return ceil((static_cast<double> (cookies()) / static_cast<double> (m)));
		}
		
		void print(){
			cout << boxes() << endl;
		}
};


int main(void){
	Obzartuchy o;
	
	number t;
	
	cin >> t;
	
	for(number i = 0; i < t; i++){
		o.getData();
		o.print();
	}
	return 0;
}