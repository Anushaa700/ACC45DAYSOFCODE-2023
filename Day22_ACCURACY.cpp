#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int X;
	    cin>>X;
	    if(X==0 || X%3 == 0){
	        cout<<0<<endl;
	    }
	    else if(X%3 != 0){
	        cout<<(((X/3)+1)*3) - X<<endl;
	    }
	}
	return 0;
}
