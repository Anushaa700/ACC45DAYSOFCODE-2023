#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,M; //N=no._of_candies,M=no._of_friends
	    cin>>N>>M;
	    if(N%M ==0 && (N/M)%2==0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
