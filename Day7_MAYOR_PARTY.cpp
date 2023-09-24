#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,Pa,Pb,Pc;
	cin>>T;
	
	while(T--){
	    cin>>Pa>>Pb>>Pc;
	    if(Pb > Pa + Pc) {
	        cout<<Pb<<endl;
	    }
	    else{
	        cout<<Pa + Pc<<endl;
	    }
	}
	return 0;
}
