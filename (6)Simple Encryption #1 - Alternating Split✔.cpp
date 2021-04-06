//https://www.codewars.com/kata/57814d79a56c88e3e0000786/train/cpp


std::string encrypt(std::string text, int n)
{
    if (text == "") return "";
    if (n <= 0) return text;
    std::string temp = "";
    int l = text.length();
    while (n--) {
    for (int i = 1; i < l; i += 2) {
        temp += text[i];
    }
    for (int i = 0; i < l; i += 2) {
        temp += text[i];
    }
    text = temp;
    temp = "";
}
    return text;
}

std::string decrypt(std::string encryptedText, int n)
{
    if (encryptedText == "") return "";
    if (n <= 0) return encryptedText;
    std::string temp = "";
    int l = encryptedText.length();
    std::cout << l << std::endl;
    std::string w = encryptedText.substr(l-1);
    std::cout << w << std::endl;
    int q = l/2 ;
    std::cout << encryptedText << std::endl;
    while (n--) {
        for (int i = 0; i < l/2 ; i++) {
            temp += encryptedText[q++];
            temp += encryptedText[i];
        }

        encryptedText = temp;
        temp = "";
        q = l / 2 ;
    }
    if (l % 2 != 0) encryptedText += w;
    return encryptedText;
}
