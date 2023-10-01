#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    if((X+Y)+Z==0||(Y+Z)-X==0||X-Y+Z==0||X+Y-Z==0||Z-X-Y==0||X-Y-Z==0||Y-X-Z==0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
