#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int T,Pa,Pb,Qa,Qb;
    cin>>T;
    
    while(T--){
        cin>>Pa>>Pb>>Qa>>Qb;
        int c=max(Pa,Pb);
        int d=max(Qa,Qb);
        if(c<d){
            cout <<"P"<<endl;
        }
        else if(c == d){
            cout <<"TIE"<<endl;
        }
        else{
            cout <<"Q"<<endl;
        } 
    }
	return 0;
}