#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A,B;
	    cin>>A>>B;
	    if(A==B || A>B){
	        cout<<7-A<<endl;
	    }
	    else if(B>A){
	        cout<<7-B<<endl;
	    }
	}
	return 0;
}
