#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;  // wektor na wczytane liczby

    int number;
    while (std::cin >> number) {  // wczytuj liczby ze standardowego wejścia, aż do końca pliku
        numbers.push_back(number);  // dodaj wczytaną liczbę do wektora
    }

    std::reverse(numbers.begin(), numbers.end());  // odwróć kolejność liczb

    for (int i = 0; i < numbers.size(); i++) {  // wypisz liczby w odwrotnej kolejności
        std::cout << numbers[i] << " ";
    }

    return 0;
}
