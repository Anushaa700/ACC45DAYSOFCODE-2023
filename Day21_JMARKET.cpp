#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
    while(T--){
        int X,A,B,C;
	    cin>>X>>A>>B>>C;
	     int price;
	    if(A>=B && A>=C){
	        if(B>=C){
	            price=B+(X-1)*C;
	        }
	        else{
	            price=C+(X-1)*B;
	        }
	    }
	    else if(B>=A && B>=C){
	        if(A>=C){
	            price=A+(X-1)*C;
	        }
	        else{
	            price=C+(X-1)*A;
	        }
	    }
	    if(C>=B && C>=A){
	        if(B>=A){
	            price=B+(X-1)*A;
	        }
	        else{
	            price=A+(X-1)*B;
	        }
	    }
	    cout<<price<<endl;
	}
	return 0;
}
