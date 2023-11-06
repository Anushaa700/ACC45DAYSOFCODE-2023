#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
           cin >> arr[i];
        }
        for (int i = 0; i < (n/2)*2; i+=2)
            {
                arr[i] = char(122-(int(arr[i]%97)));
                arr[i+1] = char(122-(int(arr[i+1]%97)));
                swap(arr[i],arr[i+1]);
            }
        if (n%2!=0){
            arr[n-1] = char(122-(int(arr[n-1]%97)));
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
        cout << endl;
        
    }
	return 0;
}
