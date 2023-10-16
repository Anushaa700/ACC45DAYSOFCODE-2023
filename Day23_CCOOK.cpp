#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int A[5];
	int count=0;
	
	for(int i=0;i<N;i++){
	for(int i=0;i<5;i++){
	    cin>>A[i];
	}
	for(int i=0;i<5;i++){
	    if(A[i]==1){
	        count++;
	    }
	    else if(A[i]==0){
	        count;
	    }

	}
	
	if(count==0){
	    cout<<"Beginner"<<endl;
	    count=0;
	}
	else if(count==1){
	    cout<<"Junior Developer"<<endl;
	    count=0;
	}
	else if(count==2){
	    cout<<"Middle Developer"<<endl;
	    count=0;
	}
	else if(count==3){
	    cout<<"Senior Developer"<<endl;
	    count=0;
	}
	else if(count==4){
	    cout<<"Hacker"<<endl;
	    count=0;
	}
	else{
	    cout<<"Jeff Dean"<<endl;
	    count=0;
	}
	}
	return 0;
}
