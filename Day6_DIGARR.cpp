
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int T,D;
	string N;
	cin>>T;
	while(T--){
	    cin>>D;
	    cin>>N;
	    int count = 0;
	    char array[N.size()+1];
	    strcpy(array,N.c_str());
	    for(int i = 0;i<N.size();i++){
	        if(array[i]=='0' || array[i] == '5'){
	        count++;
	        break;
	    }}
	    if(count > 0){
	        cout<<"Yes";
	    }
	    else{
	        cout<<"No";
	    }
	    cout<<endl;
	    
	
	}
	return 0;
}
