#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    if(N==X || X==0){
	        cout<<"0"<<endl;
	    }
	    
	    else if(N-X>X){
	        cout<<X<<endl;
	    }
	    else{
	        cout<<N-X<<endl;
	    }
	    
	   
	}
	return 0;
}
