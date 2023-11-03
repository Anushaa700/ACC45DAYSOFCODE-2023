#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	 long long  int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	  long long  int sum = 0;
	    for(int i=0;i<n-1;i++)
	    {
	       sum += abs(arr[i]-arr[i+1])-1;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
