//https://www.codewars.com/kata/51ba717bb08c1cd60f00002f/train/cpp

#include <string>
#include <vector>
using namespace std;

std::string range_extraction(std::vector<int> args) {
	string ans = ""; 
	int k = 1;
	bool flag = false;
	int a = 1;
	//cout << args.size() << endl;
	for (int i = 0; i < args.size() - 1; i++) {
		if (args[i] + 1 != args[i + 1]) {
     // if (i != args.size() )
			ans += to_string(args[i]) + ",";
     // else ans += to_string(args[i]);
		}
		else {
			int j = i;
				while (args[i] + a == args[j + 1]) {
					if (j < args.size() - 2) {
						//cout << args[j] << " " << args[j + 1] << endl;
						j++;
						//cout << "j: " << j << endl;
						k++;
						//cout << "i: " << i << endl;
						//cout << "k: " << k << endl;
						a++;
						//cout << "a: " << a << endl;
					}
					else {
						flag = true;
						k++;
						break;
					}
				}
			a = 1;
			if (k < 3) {
				while (k > 0) {
					ans += to_string(args[i]) + ",";
					i++; k--;
				}
			}
			else  if (flag) {
				ans += to_string(args[i]) + "-" + to_string(args[i + k - 1]);
			}
			else ans += to_string(args[i]) + "-" + to_string(args[i + k - 1]) + ",";
				i += k - 1;
				//cout << "Ai: " << i << endl;
				k = 1;
		}
    if ((flag == false) && (i == args.size()- 2)) ans += to_string(args[args.size() - 1]);
		//cout << "ans: " << ans << endl;
	}
  if (ans[ans.length() - 1] == ',') ans.erase(ans.end() - 1);
	return ans;
}
