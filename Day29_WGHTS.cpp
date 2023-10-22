#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int W,X,Y,Z;
	    cin>>W>>X>>Y>>Z;
	    if(X+Y+Z==W || X+Y==W ||X+Z==W || Y+Z==W ||X==W ||Y==W ||Z==W){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
