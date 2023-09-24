#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;       //X = following,Y = follower
	cin>>T;
	
	while(T--){
	    cin>>X>>Y;
	    if(X > (10*Y)) {
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
