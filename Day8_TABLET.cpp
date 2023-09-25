#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int N,B;
	
	while (T--) {
	    cin>>N>>B;//N= number of available tabs,B=budget of 1 tab
	    int Area,Max=0;
	    for(int i=1;i<=N;i++){
	        int Wi,Hi,Pi;//Wi=width,Hi=height,Pi=Price
	        cin>>Wi>>Hi>>Pi;
	        if(B>=Pi){
	            Area = Wi * Hi;
	            if(Area > Max) {
	                Max = Area;
	            }
	        }
	    }
	    if(Max == 0){
	        cout<<"no tablet"<<endl;
	    }
	    else{
	    cout<<Max<<endl;
	           }
	}

	return 0;
}
