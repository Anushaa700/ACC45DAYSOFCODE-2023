#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N;
	cin>>T;
	
	for (int i = 0; i < T;i++) {
	    cin>>N;
	    if(N == 1){
	        cout<<N<<endl;
	    }
	    else{
	        cout<<((N/2)+1)<<endl;
	    }
	}
}