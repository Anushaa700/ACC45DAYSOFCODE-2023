#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int count=0;
        if(a>d)
        count++;
        if(b>e)
        count++;
        if(c>f)
        count++;
        if(count>1)
        cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
	return 0;
}
