#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--)
    {
        int N,X;
        cin>>N>>X;
        int a[N],i,count=0;
        for(i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<N;i++)
        {
            if(a[i]>=X)
            count++;
        }
        cout<<count<<endl;
    }
	return 0;
}
