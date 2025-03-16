#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    long long sum = n * (n + 1) >> 1;

    while(n > 1 && n--) {
        int x; 
        std::cin >> x;
        sum -= x;
    }

    std::cout << sum;
}