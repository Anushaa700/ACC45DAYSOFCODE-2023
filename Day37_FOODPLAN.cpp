#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int T,N,M;
	cin>>T;
	while(T--){
	    cin>>N>>M;
	    int d=(10/100)*N;
	    if(N-N/10.0 > M)
	    cout<<"DINING\n";
	    else if(N-N/10.0<M)
	    cout<<"ONLINE\n";
	    else
	    cout<<"EITHER\n";
	}
	return 0;
}
