//https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/cpp

#include <string>
using namespace std;
std::string createPhoneNumber(const int arr[10]) {
    std::string temp = "(";
    for (int i = 0; i < 3; i++) {
        temp += to_string(arr[i]);
    }
    temp += ") ";
    for (int i = 3; i < 6; i++) {
        temp += to_string(arr[i]);
    }
    temp += "-";
    for (int i = 6; i < 10; i++) {
        temp += to_string(arr[i]);
    }
    return temp;
}
