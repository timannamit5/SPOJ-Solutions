// solution for problem https://pl.spoj.com/problems/BFN1/
#include <iostream>

using namespace std;

class Problem{
	private:
        // tests numbet
		int t;
	
        // input
		int n;
		
		struct retur{
			int liczba;
			int licznik;
		};
		
		retur ret;
	public:
		void solve(){
			ret.liczba=0;
			ret.licznik=0;
			
			cin>>t;
			
			for(int i=0;i<t;i++){
				cin>>n;
				
				ret.liczba+=n;
				this->test(n);
				
				cout<<ret.liczba<<endl;
				cout<<ret.licznik<<endl;
				
				ret.liczba=0;
				ret.licznik=0;
			}
		}
		
		void test(int licz){	
			string pom=to_string(licz);
			string pom2="";
			
			for(int i=pom.length()-1;i>=0;i--){
				pom2+=pom[i];
			}
			
			if(pom==pom2){
				return;

			}
			
			else{
				ret.licznik++;
				ret.liczba+=stoi(pom2, nullptr, 10);
	
				test(ret.liczba);
			}
		}	
};

int main() {
	Problem z;
	z.solve();
	
	return 0;
}