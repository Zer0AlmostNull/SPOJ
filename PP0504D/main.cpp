#include <cmath>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstdint>

void printfloat(float f) {
  uint32_t x;
  std::copy(reinterpret_cast<char*>(&f), reinterpret_cast<char*>(&f) + sizeof(float), reinterpret_cast<char*>(&x));
  for (int i = 3; i >= 0; --i) {
    std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)((x >> (8 * i)) & 0xff) << ' ';
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    float f;
    std::cin >> f;
    printfloat(f);
    std::cout << std::endl;
  }
  return 0;
}
