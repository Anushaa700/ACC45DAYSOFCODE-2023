#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while (T--)
    { 
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
    }
    int max=0;
    
        for (int i =0;i<n-k+1;i++){
            int cur=0;
            for(int j=i;j<i+k;j++){ 
                cur+= a[j];
            }
           
            if (cur>max)
            { 
                max=cur;
            }
        }
        cout<<max<<endl;
    }
	return 0;
}
