#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool primeGen(int n){
    for(int i=2 ; i<= sqrt(n) ; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int m,n;
        cin>>m>>n;
        for(int i =m;i<=n;i++){
            if(i==1){
               continue; 
            } 
            if(primeGen(i)){
                cout<<i<<endl;
            }
        }
        
	}
	return 0;
}