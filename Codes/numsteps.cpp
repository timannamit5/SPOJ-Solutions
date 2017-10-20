#include<iostream>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
  int x,y;
  cin>>x>>y;
  if(y > x || y < (x - 2) || y == x - 1){
   cout<<"No Number"<<endl;
   continue;
  }
  if( (x&1) && (y&1)){
   cout<<x+y-1<<endl;
   continue;
  }
  cout<<x+y<<endl;
 }
 return 0;
}
