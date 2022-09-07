#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, mn, mx;
    a = 10;
    b = 20;
    c = 30;
    d = 40;
    cin >> a >> b >> c >> d;
    mn = min(a, min(b, min(c, d)));
    mx = max(a, max(b, max(c, d)));
    cout << mn <<' '<< mx;
    return 0;
}