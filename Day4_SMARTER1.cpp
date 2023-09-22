#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	float L,V1,V2;
	cin>>T;
	while(T--) {
	    cin>>L>>V1>>V2;
	    if ((L/V1) == (L/V2)){
	        cout<<"-1"<<endl;
	    }
	    else {
	        cout<<( (ceil(L/V1) - ceil(L/V2)) - 1)<<endl;
	    }
	}
	return 0;
}
