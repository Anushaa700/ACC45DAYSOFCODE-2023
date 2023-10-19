#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N,H,x,a[100],c=0;
	cin>>N>>H>>x;
	for(int i=0;i<N;i++)
	    cin>>a[i];
	for(int i=0;i<N;i++){
	    if(a[i]+x>=H)
	        c=1;
	}
	if(c==1)
	    cout<<"YES"<<endl;
	else
	    cout<<"NO"<<endl;
	return 0;
}
