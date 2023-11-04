#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int maxt, maxn, sumn;
        long iterations = 0;
        cin >> maxt >> maxn >> sumn;
        for (int i = 1; i <= maxt; i++)
        {
            if (maxn <= sumn)
            {
                iterations += maxn * maxn;
                sumn = sumn - maxn;
            }
            else
            {
                iterations += sumn * sumn;
                sumn-=sumn;
            }
            if (sumn == 0)
                break;
        }
        cout<<iterations<<endl;
    }
	return 0;
}
