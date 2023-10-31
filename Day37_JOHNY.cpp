#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int a[N];
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	    }
	    int k,ans;
	    cin>>k;
	    ans=a[k-1];
	    sort(a,a+N);
	    for(int i=0;i<N;i++){
	        if(ans==a[i])
	        cout<<i+1<<endl;
	    }
	}
	return 0;
}
