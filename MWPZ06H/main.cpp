#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int D;
    std::cin >> D;

    for (int i = 0; i < D; i++) {
        int N;
        std::cin >> N;

        std::vector<int> points(N);
        for (int j = 0; j < N; j++) {
            std::cin >> points[j];
        }

        std::sort(points.begin(), points.end(), std::greater<int>());

        for (const auto& point : points) {
            std::cout << point << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
