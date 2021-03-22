// https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/cpp


int find_short(std::string str)
{
    string temp = "", min = str;
    str += ' ';
    int l = str.length();
    for (int i = 0; i < l; i++) {
        if (str[i] != ' ') {
            temp += str[i];
        }
        else {
            if (temp.length() < min.length()) {
                min = temp;
            }
            temp = "";
        }
    }
    return min.length();
}
