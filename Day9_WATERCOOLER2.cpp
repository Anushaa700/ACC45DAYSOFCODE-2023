#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    int N;
	    if ((Y/X)*X < Y){
	        cout<<Y/X<<endl;
	    }
	    else {
	        cout<<(Y/X)-1<<endl;
	    }
	    }
	
	return 0;
}
