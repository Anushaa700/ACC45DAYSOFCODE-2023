#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y,count;
	    cin>>X>>Y;
	    
	    if(Y>X){
	        cout<<X<<endl;
	    }
	    else if(X/Y==0){
	        cout<<(X-Y)<<endl;
	    }
	    else{
	        count=(X-((X/Y)*Y));
	        cout<<count+(X/Y)<<endl;
	    }
	}
	return 0;
}
