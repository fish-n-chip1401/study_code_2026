#include <iostream>

using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long tuan = N / 7;
	long long ngay = N % 7; // so ngay du ra 
	cout << tuan << " " << ngay << endl;
	
	return 0;
}