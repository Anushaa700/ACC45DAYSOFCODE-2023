#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int u=0; u<T; u++){
	    int N;
	    cin>>N;
	    string S;
	    cin>>S;
	    int count=0;
	    for(int i=0; i<N; i++){
	        if((S[i]=='1') && (S[i+1]=='0')) {
	             count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
