#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--){
    string S;
    cin>>S;
    int length=S.length();
    int count=0;
    for(int i=0;i<length;i++){
        if(S[i]=='<' && S[i+1]=='>')
        count++;
    }
    cout<<count<<endl;
    }
	return 0;
}
