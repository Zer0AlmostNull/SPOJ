#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        
        vector<int> a;
        for (int i = 2; i < n; i++) {
            if (i % x == 0 && i % y != 0) {
                a.push_back(i);
            }
        }
        
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}