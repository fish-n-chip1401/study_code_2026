#include <iostream>

using namespace std;

int main()
{
	int h1, m1, s1, h2, m2, s2;
	cin >> h1;
	cin >> m1;
	cin >> s1;
	cin >> h2;
	cin >> m2;
	cin >> s2;
	long long tong = ((h2 * 3600) + (m2 * 60) + s2) - ((h1 * 3600) + (m1 * 60) + s1);
	long long gio = (tong % 86400) / 3600;
    long long phut = (tong / 60) % 60;
    long long giay = tong % 60;
    cout << gio << " " << phut << " " << giay << endl;
	
	return 0;
	
	
}