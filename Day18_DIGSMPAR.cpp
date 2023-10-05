#include <iostream>
using namespace std;

int main() {
	int T, countlast;
	long long int N, X;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    countlast=0;
	    X=N;
	    while(N%10==9)
	    {
	        countlast++;
	        N/=10;
	    }
	    if(countlast%2==1)
	        cout<<X+2<<endl;
	    else
	        cout<<X+1<<endl;
	}
	return 0;
}
