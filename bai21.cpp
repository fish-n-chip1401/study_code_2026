#include <iostream>

using namespace std;

int main()
{
	unsigned long long S;
	cin >> S;
	long long tuan = S / 604800;
	long long ngay = (S % 604800) / 86400;
	long long gio = (S % 86400) / 3600;
	long long phut = (S / 60) % 60;
	long long giay = S % 60;
	cout << tuan << " " << ngay << " " << gio << " " << phut << " " << giay << endl;
	
	return 0;
}