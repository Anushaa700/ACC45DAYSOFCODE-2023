#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        if (N == 1 || N % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
	return 0;
}
