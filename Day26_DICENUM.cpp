#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	   vector<int> v(6);
	   for(int i=0;i<6;i++){
	       cin>>v[i];
	   }
	   int alice ;
	   int bob;
	   sort(v.begin(),v.begin()+3);
	   for(int i=0;i<3;i++){
	       alice = v[2]*100 + v[1]*10 + v[0];
	   }
	   sort(v.begin()+3,v.begin()+6);
	       for(int i=3;i<6;i++){
	           bob = v[5]*100 + v[4]*10 + v[3];
	       }
	       if(alice>bob){
	           cout<<"Alice"<<endl;
	       }else if(alice<bob){
	           cout<<"Bob"<<endl;
	       }else{
	           cout<<"Tie"<<endl;
	       }
	   
	    
	}
	return 0;
}
