#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y,D;
	    cin>>X>>Y>>D;
	    
	    int a = abs(X-Y);
	    
	    if(a<=D)
	        cout<<"yes"<<endl;
	    else
	        cout<<"no"<<endl;
	}
	return 0;
}
