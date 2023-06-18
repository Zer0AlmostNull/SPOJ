#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> even, odd;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;

            if (i % 2 == 0) {
                even.push_back(x);
            } else {
                odd.push_back(x);
            }
        }

        for (int x : even) {
            cout << x << " ";
        }

        for (int x : odd) {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}
