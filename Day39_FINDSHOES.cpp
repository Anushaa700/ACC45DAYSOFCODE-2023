#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,M;
	    cin>>N>>M;
	    if(M==0){
	        cout<<2*N<<endl;
	    }
	    else if(N>M){
	        cout<<(N-M)+N<<endl;
	    }
	    else {
	        cout<<N<<endl;
	    }
	}
	return 0;
}
