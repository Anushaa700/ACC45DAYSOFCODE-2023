#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X;
	cin>>T;
	while(T--) {
	    cin>>X;
	    if (X <= 15) {
	        cout<<"Yes"<<endl;
	    }
	    else {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
