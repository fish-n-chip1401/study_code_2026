#include <iostream>

using namespace std;

int main()
{
	long long M;
	cin >> M;
	long long gio = M / 60;
	long long phut = M % 60;
	cout << gio << " " << phut << endl;
	
	return 0;
}