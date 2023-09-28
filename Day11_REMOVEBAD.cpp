#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    int count=0,count1=0;
	     sort(A,A+N);
	   for(int i=0;i<N;i++){
	       if(A[i]==A[i+1]){
	           count++;
	       }
	   else{
	   count1=max(count,count1);
	   count=0;
	   }
	   }
	   cout<<N-1-count1<<endl;
	        
	    
	}
	return 0;
}

