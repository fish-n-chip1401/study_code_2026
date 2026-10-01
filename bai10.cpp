#include <iostream>

using namespace std;

int main()
{
	long long S;
	cin >> S;
	long long phut = S / 60;
	long long giay = S % 60;
	cout << phut << " " << giay << endl;
	
	return 0;
}