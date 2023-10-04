#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    int A[N],B[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<N;i++){
	        cin>>B[i];
	    }
	    int countom=0,maxom=0,countaddy=0,maxaddy=0;
	    for(int i=0;i<N;i++){
	        if(A[i]==0){
	            countom=0;
	        }
	        else{
	            countom++;
	        }
	        if(maxom<countom){
	            maxom=countom;
	        }
	    }
	    for(int i=0;i<N;i++){
	        if(B[i]==0){
	            countaddy=0;
	        }
	        else{
	            countaddy++;
	        }
	        if(maxaddy<countaddy){
	            maxaddy=countaddy;
	        }
	    }
	    if(maxom>maxaddy){
	        cout<<"Om"<<endl;
	    }
	    else if(maxaddy>maxom){
	        cout<<"Addy"<<endl;
	    }
	    else{ 
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}
