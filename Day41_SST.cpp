#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(10*a> 5*b)
	    {
	        cout<<"first"<<endl;
	    }
	    else if(10*a == 5*b)
	    {
	        cout<<"any"<<endl;
	    }
	    else
	    {
	        cout<<"second"<<endl;
	    }
	}
	return 0;
}
