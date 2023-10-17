#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int C,X,Y;
	    cin>>C>>X>>Y;
	    if(C>X){
	    cout<<(C-X)*Y<<endl;
	    }
	    else if(C<=X){
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
