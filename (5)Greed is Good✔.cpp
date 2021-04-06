//https://www.codewars.com/kata/5270d0d18625160ada0000e4/train/cpp

#include <vector>
#include <algorithm>

int score(const std::vector<int>& dice) {
    std::vector<int> temp;
    int n = 1, ans = 0;
    for (int i = 0; i < dice.size(); i++) {
        temp.push_back(dice[i]);
    }
    int q = temp.size();
    int k = 0;
    std::sort(temp.begin(), temp.end());
    std::cout << temp.size() << std::endl;
    for (int i = 0; i < temp.size(); i++) {
        for (int j = i + 1; j < temp.size(); j++) {
            if (temp[i] == temp[j]) {
                n++;
            }
        }
        std::cout << "n: " << n << std::endl;
            if (temp[i] == 1) {
        ans += 1000 * (n / 3) + 100 * (n % 3);
    }
    else if (temp[i] == 5) {
        ans += 500 * (n / 3) + 50 * (n % 3);
    }
    else if (temp[i] == 2) {
        ans += 200 * (n / 3);
    }
    else if (temp[i] == 3) {
        ans += 300 * (n / 3);
    }
    else if (temp[i] == 4) {
        ans += 400 * (n / 3);
    }
    else if (temp[i] == 6) {
        ans += 600 * (n / 3);
    }
        temp.erase(temp.begin(), temp.end() - temp.size() + n);
        i = -1;
        n = 1;
        std::cout << "vector:" << std::endl;
        for (int i = 0; i < temp.size(); i++) {
            std::cout << temp[i] << std::endl;
        }
    }
    return ans;
    }
