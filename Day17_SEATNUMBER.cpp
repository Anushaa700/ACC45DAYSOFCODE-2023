#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    for(int i=1;i<=10;i++){
	        if(N==i){
	            cout<<"Lower Double"<<endl;
	        }
	    }
	    for(int i=11;i<=15;i++){
	        if(N==i){
	            cout<<"Lower Single"<<endl;
	        }
	    }
	    for(int i=16;i<=25;i++){
	        if(N==i){
	            cout<<"Upper Double"<<endl;
	        }
	    }
	    for(int i=26;i<=30;i++){
	        if(N==i){
	            cout<<"Upper Single"<<endl;
	        }
	    }
	}
	return 0;
}
