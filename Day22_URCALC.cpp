#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int A,B;
    char C;
	cin>>A;
	cin>>B;
	cin>>C;
	if(C == '+'){
	    cout<<A+B<<endl;
	}
	else if(C == '-'){
	    cout<<A-B<<endl;
	}
	else if(C == '*'){
	    cout<<A*B<<endl;
	}
	else if(C == '/'){
	    if(A!=0){
	        cout<<fixed<<setprecision(1000)<<double(A)/B<<endl;
	    }
	    else{
	    cout<<0<<endl;
	}
	}
	return 0;
}
