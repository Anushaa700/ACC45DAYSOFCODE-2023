#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin>>T;
	while (T--) {
	    cin>>X>>Y;
	    if (X == Y || X > Y) {
	        cout<<Y<<endl;
	    }
	    else if (X < Y) {
	        cout<<X+(2*(Y-X))<<endl;
	    }
	        
	}
	return 0;
}
