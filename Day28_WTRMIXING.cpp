#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T;
	cin>>T;
	while(T--){
	    int N,M,P,Q;
	    cin>>N>>M>>P>>Q;
	    if(N==M)
	        cout<<"YES"<<endl;
	    else{
	        if(N>M){
	            if(N-M <= Q)
	                cout<<"YES"<<endl;
	            else
	                cout<<"NO"<<endl;
	        }
	        if(N<M){
	            if(M-N <= P)
	                cout<<"YES"<<endl;
	            else
	                cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
