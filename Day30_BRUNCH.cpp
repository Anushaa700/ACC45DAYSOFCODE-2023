#include <iostream>
using namespace std;

int main() {
	// your code goes here
	unsigned int X,Y,z,T;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    z=X/Y;
	    if(z>20)
	        cout<<"20"<<endl;
	    else
	        cout<<z<<endl;
	}
	return 0;
}
