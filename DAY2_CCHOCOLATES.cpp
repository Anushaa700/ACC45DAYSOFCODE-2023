#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y,Z;
	cin>>T;
	
	for(int i = 0;i < T;i++) {
	    cin>>X>>Y>>Z;
	    int Total;
	    Total = ((X*5) + (Y*10)) / Z;
	    cout<<Total<<endl;
	}
	return 0;
}
