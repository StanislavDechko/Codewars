//https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c/train/cpp

#include <vector>

using namespace std;

int maxSequence(const vector<int>& arr) {
    int n = arr.size(), local_max = 0, global_max = -1, neg = 0;
    if (arr.size() == 0) return 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] < 0) neg++;
  }
  if (neg == arr.size()) return 0;
    for (int i = 0; i < n; i++) {
        local_max = max(arr[i], arr[i] + local_max);
        cout << "arr[i]: " << arr[i] << " local max: " <<local_max << endl;
        if (local_max > global_max) {
            global_max = local_max;
        }
    }
    return global_max;
}
