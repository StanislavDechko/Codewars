//https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/cpp

#include <cmath>
bool narcissistic(int value) {
    int k = 0, temp = value, a = 0;
    while (temp > 0) {
        k++;
        temp /= 10;
    }
    temp = value;
    std::cout << "number of digits: " << k << std::endl;
    while (value > 0) {
        a += pow(value % 10, k);
        value /= 10;
    }
    std::cout << a << std::endl;
    if (a == temp) return true;
    else return false;
}
