#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int X;
	    cin>>X;
	    if((X%10)%5==0)
	    {
	        cout<<X/10+(X%10)/5<<"\n";
	    }
	    else
	    {
	        cout<<"-1\n";
	    }
	}
	return 0;
}
