#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int heights[N],max_h=0;
	    for(int i=0;i<N;i++){
	        cin>>heights[i];
	        if(heights[i]>max_h){
	            max_h=heights[i];
	        }
	    }
	       cout<<max_h<<endl;

	}
	return 0;
}
