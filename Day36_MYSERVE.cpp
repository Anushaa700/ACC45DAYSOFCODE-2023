#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--){
        int p,q;
        cin>>p>>q;
        int x= p+q;
	   if(x%4==0 || x%4==1){
	       cout<<"alice"<<endl;
	   }
	   else{
	       cout<<"bob"<<endl;
	   }
    }
	return 0;
}
