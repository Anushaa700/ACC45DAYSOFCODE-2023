#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
    int sol=0;
    int ans =0;
    for(int i=1;i<=N;i++) 
    {
        if(sol==1) 
        {
            ans++;
        }
        sol=(sol+1)%7;
    }
    cout<<ans<<endl;
    }
	return 0;
}
