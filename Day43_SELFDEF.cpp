#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n]={0};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int sum=0;
	    for(int i=0;i<n;i++){
	        if(9<a[i] && a[i]<61){
	            sum++;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
