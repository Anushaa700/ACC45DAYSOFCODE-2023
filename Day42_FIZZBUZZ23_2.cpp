#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int b,d,r;
	    cin>>b>>d>>r;
	    int f = b/(d*5);
	    cout<<f+r<<endl;
	}
	return 0;
}
