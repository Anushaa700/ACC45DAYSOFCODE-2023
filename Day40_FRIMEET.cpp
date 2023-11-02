#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin >> t;
	while(t-->0)
	{
	    cin >> a >> b;
	    if(b>a)
	    cout << "NO" << endl;
	    else
	    cout << "YES" << endl;
	}
	return 0;
}
