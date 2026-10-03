#include <iostream>

using namespace std;

int main()
{
    long long S;
    cin >> S;
    long long ngay = S / 86400; // 24h * 60p * 60s
    long long gio = (S % 86400) / 3600;
    long long phut =(S / 60) % 60;
    long long giay =S % 60;
    cout << ngay << " " << gio << " " << phut << " " << giay << endl;

    return 0;
}