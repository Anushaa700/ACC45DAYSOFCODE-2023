#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y,Z;
	cin>>T;
	
	for(int i = 0;i < T;i++) {
	    cin>>X>>Y>>Z;
	    int Number_Of_Chocolates;
	    Number_Of_Chocolates = ((X*5) + (Y*10)) / Z;
	    cout<<Number_Of_Chocolates<<endl;
	}
	return 0;
}
