//https://www.codewars.com/kata/54d512e62a5e54c96200019e/train/cpp

#include <vector>
#include <cmath>
using namespace std;

class PrimeDecomp
{
public:
    static std::string factors(int lst){
      vector<int> temp, end;
    string ans, t_ans1, t_ans2;
    for (int i = 2; i < sqrt(lst); i++)
    {
        bool flag = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag) {
            temp.push_back(i);
        }
    }
    /*for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << " ";
    }*/
    //cout << endl;
  int q = temp.size();
    for (int i = 0; i < q; i++) {
        if (lst % temp[i] == 0) {
            //cout << "lst: " << lst << "\t";
            lst /= temp[i];
            //cout << "temp[i]: " << temp[i] << "\t";
            end.push_back(temp[i]);
                i--;
        }
    }
    //cout << endl;
    if (end.empty()) {
      ans += "(";
        ans += to_string(lst);
      ans += ")";
        return ans;
    }
  q = end.size();
    for (int i = 0; i < q; i++) {
        cout << end[i] << " ";
    }
    cout << endl;
    int n = 1;
    for (int i = 0; i < q; i++) {
        for (int j = i + 1; j < q; j++) {
            if (end[i] == end[j]) {
                n++;
            }
        }
        cout << "end[i]: " << end[i] << " n: " << n << endl;
        if (n > 1) {
            t_ans1 += "(";
            t_ans1 += to_string(end[i]);
            t_ans1 += "**";
            t_ans1 += to_string(n);
            t_ans1 += ")";
            ans += t_ans1;
            t_ans1 = "";
        }
        else if (n == 1) {
            t_ans2 += "(";
            t_ans2 += to_string(end[i]);
            t_ans2 += ")";
            ans += t_ans2;
            t_ans2 = "";
        }
        i += n - 1;
        n = 1;
    }
      if (lst != 1) {
            t_ans2 += "(";
            t_ans2 += to_string(lst);
            t_ans2 += ")";
            ans += t_ans2;
            t_ans2 = "";
        }
    cout << endl;
    return ans;
    }
};
