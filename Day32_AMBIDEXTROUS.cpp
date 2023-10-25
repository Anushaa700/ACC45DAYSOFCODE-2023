#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int L,R,M; 
	    cin>>L>>R>>M;
	    
	    int ans = 0;
	    
	    if(M%L == 0) ans += M/L;
	    else ans = ans + (M/L) + 1;
	    
	    ans += M/R;
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}
