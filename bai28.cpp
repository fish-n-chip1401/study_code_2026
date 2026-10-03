#include <iostream>

using namespace std;

int main()
{
    long long T;
    cin >> T;
    long long gio = T / 3600000;
    long long phut =(T % 3600000) / 60000;
    long long giay = (T % 60000) / 1000;
    long long mili = T % 1000;
    cout << gio << " " << phut << " " << giay << " " << mili << endl;
    
    return 0;
}