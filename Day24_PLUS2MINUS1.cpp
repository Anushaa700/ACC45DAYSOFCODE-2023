#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    long long int Y,A,B;
	    cin>>Y;
	    A=2*Y+Y;
	    if(Y==0)
	    {
	        cout<<"1";
	    }
	    else if(Y==1)
	    {
	        cout<<"3";
	    }
	    else
	    {
	        cout<<A;
	    }
	    cout<<endl;
	}
	return 0;
}
