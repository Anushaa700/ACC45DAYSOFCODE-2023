#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int A,B,C,X;
	    cin>>A>>B>>C>>X;
	    if(A+B>=X || A+C>=X || B+C>=X){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
