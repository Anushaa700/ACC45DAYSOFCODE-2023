#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
        int A1,A2,B1,B2;
	    cin>>A1>>A2>>B1>>B2;
	    if(A2 + B2 > A1 + B1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
