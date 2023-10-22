#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T-->0){
	        int N;
	        int sum=0;
	        cin>>N;
	        //int arr[N];
	        int x,even=0,odd=0;
	        for(int i =0; i<N; i++){
	                cin>>x;
	                sum=sum+x;
	               if(x%2!=0){
	                   odd++;
	               }
	               else{
	                       even++;
	               }
	        }
	        
	        if(sum%2==0&& odd>=2&& odd%2==0){
	                cout<<"YES\n";
	        }
	        else{
	                cout<<"NO\n";
	        }
	        
	}
	return 0;
}
