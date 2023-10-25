#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >>T;
	
	while(T--){
	    map<int,int>mp;
	    int N;
	    cin>>N;
	    int res=0;
	    int a[N];
	    for(int i=0;i<N;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<N;i++)
	    mp[a[i]]++;
	    for(auto i:mp)
	    {
	        if(i.second>res)
	        res=i.second;
	    }
	  
	    cout << N-res << endl;
	    
	}
	return 0;
}
