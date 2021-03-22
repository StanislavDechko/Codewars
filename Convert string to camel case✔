//  https://www.codewars.com/kata/517abf86da9663f1d2000003/train/cpp

#include <string>


std::string to_camel_case(std::string text) {
    std::string temp = "";
    int l = text.length();
    for (int i = 0; i < l; i++) {
        if ((text[i] == '-') || (text[i] == '_')) {
            temp += toupper(text[i + 1]);
            i++;
        }
        else temp += text[i];
    }
    return temp;
}
