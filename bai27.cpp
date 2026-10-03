#include <iostream>

using namespace std;

int main()
{
    int h, m, s;
    cin >> h;
    cin >> m;
    cin >> s;
    long long tong = (h * 3600) + (m * 60) + s;
    long long gio = (tong % 86400) / 3600;
    long long phut = (tong / 60) % 60;
    long long giay = tong % 60;
    cout << gio << " " << phut << " " << giay << endl;
    
    return 0;
}