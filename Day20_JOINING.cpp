#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    if((N%5==0 && K%5==0) || (N%5!=0 && K%5!=0)){
	        cout<<(N/5)-(K/5)<<endl;
	    }
	    else if (N%5!=0 && K%5==0){
	        cout<<(N/5)-(K/5)+1<<endl;
	        
	    }
	    else{
	        cout<<(N/5)-(K/5)-1<<endl;
	    }
	}
	return 0;
}
