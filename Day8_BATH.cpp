#include<iostream>
using namespace std;
int main(){
    int T,X,Y;
    cin>>T;
    while(T--){
        cin>>X>>Y;
        if(X < Y*2) {
            cout<<"0"<<endl;
        }
        else {
            cout<<X/(Y*2)<<endl;
        }
    }
    return 0;
}
