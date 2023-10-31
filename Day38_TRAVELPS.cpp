#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
 cin>>t;
  while(t--)
  {
   int n,a,b;
   cin>>n>>a>>b;
   char s[n];
   cin>>s;
   int sum1=0,sum2=0;
   
   for(int i=0;i<n;i++)
   {
    if(s[i]=='0')
    {
     sum1++;
     }
      else if(s[i]=='1')
      {
       sum2++;
       }
     }
     cout<<((sum1*a)+(sum2*b))<<endl;
     }
	return 0;
}
