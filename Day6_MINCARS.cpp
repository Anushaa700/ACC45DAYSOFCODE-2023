#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	float N;
	while(T--){
	    cin>>N;
        float C;
        C = N/4;
        if (N<=4){
            cout<<"1"<<endl;
        }
        else{
            cout<<ceil(C)<<endl;
        }
	}
	return 0;
}
