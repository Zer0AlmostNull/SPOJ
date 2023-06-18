#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == c) {
            cout << "NWR" << endl;
        } else {
            cout << "BR" << endl;
        }
    } else {
        double x = (c - b) / a;
        cout << fixed << setprecision(2) << x << endl;
    }

    return 0;
}
