// solution for problem https://pl.spoj.com/problems/PA05_POT/

#include <iostream>

using namespace std;

class Potegownie{
	private:
        // number of tests
		int d;
		
        // base
		unsigned long int a;
		
        // exponent
		unsigned long int b;
	
		struct ends{
			int number;
			int amount;
			
			int *tabKon;
		};
		
		ends end[9];
		
	
	public:
		Potegownie(){
			for(int i=1;i<9;i++){
				end[i].amount=i+2;
			}
			
			end[0].tabKon=new int[1];
			end[0].amount=1;
			end[0].tabKon[0]=1;
			
			end[1].tabKon=new int[4];
			end[1].amount=4;
			
			end[1].tabKon[0]=2;
			end[1].tabKon[1]=4;
			end[1].tabKon[2]=8;
			end[1].tabKon[3]=6;
			
			
			end[2].tabKon=new int[4];
			end[2].amount=4;
			
			end[2].tabKon[0]=3;
			end[2].tabKon[1]=9;
			end[2].tabKon[2]=7;
			end[2].tabKon[3]=1;
			
			
			end[3].tabKon=new int[2];
			end[3].amount=2;
			
			end[3].tabKon[0]=4;
			end[3].tabKon[1]=6;
			
			
			end[4].tabKon=new int[1];
			end[4].amount=1;
			end[4].tabKon[0]=5;
			
			
			end[5].tabKon=new int[1];
			end[5].amount=1;
			end[5].tabKon[0]=6;
			
			
			end[6].tabKon=new int[4];
			end[6].amount=4;
			
			end[6].tabKon[0]=7;
			end[6].tabKon[1]=9;
			end[6].tabKon[2]=3;
			end[6].tabKon[3]=1;
			
			
			end[7].tabKon=new int[4];
			end[7].amount=4;
			
			end[7].tabKon[0]=8;
			end[7].tabKon[1]=4;
			end[7].tabKon[2]=2;
			end[7].tabKon[3]=6;	
			
			
			end[8].tabKon=new int[2];
			end[8].amount=2;
			
			end[8].tabKon[0]=9;
			end[8].tabKon[1]=1;
		}
		
		void get(){
//			cout<<"Podaj ilosc testow: ";
			cin>>d;
			
			for(int i=0;i<d;i++){
//				cout<<endl<<"Podaj podstawe: ";
				cin>>a;
				
//				cout<<endl<<"Podaj wykladnik: ";
				cin>>b;
				
				cout<<count(a,b)<<endl;
			}
		}
		
		int count(unsigned long int pod,unsigned long int wyk){
			int ret;
			
			int indeks=pod%10;
			
			if(indeks==0){
				ret=0;
				return ret;
			}
			
			indeks--;
			
			if(end[indeks].amount==1){
				ret=end[indeks].tabKon[wyk%end[indeks].amount];
				return ret;
			}
			
			if(wyk%end[indeks].amount==0){
				ret=end[indeks].tabKon[end[indeks].amount-1];
				return ret;
			}
			
			ret=end[indeks].tabKon[wyk%end[indeks].amount-1];
			return ret;
		}
	
};

int main() {
	Potegownie p;
	p.get();
	return 0;
}