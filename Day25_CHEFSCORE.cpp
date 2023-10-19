#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
	    int N , X, Y;
	    cin >> N >> X >> Y;
	    if((Y < X) && Y != 0){
	        cout << "NO" << endl;
	    }
	    else if(Y == X || Y == 0){
	        cout << "YES" << endl;
	    }
	    else if(((N*X) >= Y && (Y % X) == 0)){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
	}
	return 0;
}
