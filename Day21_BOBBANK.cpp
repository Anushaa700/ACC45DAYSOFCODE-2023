#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int W,X,Y,Z;
	    cin>>W>>X>>Y>>Z;
	    cout<<W+(X-Y)*Z<<endl;
	}
	return 0;
}
