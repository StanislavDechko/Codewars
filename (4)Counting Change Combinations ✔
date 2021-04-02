//https://www.codewars.com/users/sats-bot/completed_solutions

#include <vector>
unsigned long long countChange(const unsigned int money, const std::vector<unsigned int>& coins) {
    // your code here
    unsigned int l = coins.size(); 
    std::vector<unsigned int> temp(money + 1);
    
    temp[0] = 1;
    for (unsigned int i = 0; i < l; i++) {
        for (unsigned int j = coins[i]; j <= money; j++) {
           // cout << "otnimaem " << temp[j - coins[i]] << endl;
            temp[j] += temp[j - coins[i]];
        }
    }
    return temp[money];
}
