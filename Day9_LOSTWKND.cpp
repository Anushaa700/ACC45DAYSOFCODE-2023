#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A1,A2,A3,A4,A5,P;
	    cin>>A1>>A2>>A3>>A4>>A5>>P;
	    int Tot_hrs = (P*A1)+(P*A2)+(P*A3)+(P*A4)+(P*A5);
	    if (Tot_hrs <= 120) {
	        cout<<"No"<<endl;
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
