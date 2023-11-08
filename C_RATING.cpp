#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        cin >> x>>y;
        if (x!=y)
        {
            z=(y-x)/8;
            if (z==0){
            cout << "1" << endl;
            }
            else if((y-x)%8==0){
                cout<<z<<endl;
            }
            else{
                cout<<z+1<<endl;
            }
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
