#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    long long P = a * b + b * c + c * a;
    cout << P;

    return 0;
}