#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    float N,M;//N=no. of runs required to win the game,                   M=remaing number of overs
	    cin>>N>>M;
	    if((N/36.0)<= M) {
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
