#include <iostream>

using namespace std;

int main()
{
	long long h, m, s;
	cin >> h;
	cin >> m;
	cin >> s;
	long long tong = h * 3600 + m * 60 + s;
	cout << tong << endl;
	
	return 0;
}