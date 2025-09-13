#include <iostream>

int main() {
    int count = 1, sum = 0;
    while (count <= 10) {
        sum += count;
        count++;
    }
    std::cout << "sum of count 1-10: " << sum << std::endl;
    return 0;
}