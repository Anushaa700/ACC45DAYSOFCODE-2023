#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int A,B,X,Y;
	    cin>>A>>B>>X>>Y;
	    if((X*Y)>= (A*B)){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
