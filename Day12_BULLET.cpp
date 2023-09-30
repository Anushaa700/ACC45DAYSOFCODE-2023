#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    if(Z-(Y/X)<=0){
	        cout<<"0\n";
	        
	    }
	    else{
	        cout<<Z-(Y/X)<<endl;
	        
	    }
	    
	}
	
	return 0;
}
