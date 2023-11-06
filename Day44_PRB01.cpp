#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,p=1;
	cin>>T;
	while(T--){
	    p=1;
	    int x;
	    cin>>x;
	    if(x==1){
	        p=0;
	    }
	    for(int i=2;i<x/2;i++){
	        if(x%i==0){
	            p = 0;
	            break;
	        }
	    }
	    if(p==1){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
