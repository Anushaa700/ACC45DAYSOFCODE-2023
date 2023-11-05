#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int a[n+1];
	    a[0]=0;
	    for(int i=1;i<=n;i++){
	        cin>>a[i];
	    }
	      int b[n];
	    for(int j=0;j<n;j++){
	        cin>>b[j];
	    }
	    int l=0;
	    for(int k=1;k<=n;k++){
	        if((a[k]-a[k-1])>=b[k-1]){
	            l++;
	        }
	    }
	    cout<<l<<endl;
	}
	return 0;
}
