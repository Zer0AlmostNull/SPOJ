#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    int a[n];
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }

    // reverse the array
    for (int j = 0; j < n / 2; j++) {
      int temp = a[j];
      a[j] = a[n - j - 1];
      a[n - j - 1] = temp;
    }

    // print the reversed array
    for (int j = 0; j < n; j++) {
      cout << a[j] << " ";
    }
    cout << endl;
  }

  return 0;
}
