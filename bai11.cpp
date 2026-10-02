#include <iostream>

using namespace std;

int main()
{
	long long S; //3665 1 1 5
	cin >> S;
	long long gio = (S / 60) / 60;
	int phut = (S / 60) % 60;
	int giay = S % 60;
	cout << gio << " " << phut << " " << giay << endl;
	
	return 0;
}