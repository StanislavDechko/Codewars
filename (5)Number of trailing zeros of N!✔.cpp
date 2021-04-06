//https://www.codewars.com/kata/52f787eb172a8b4ae1000a34/train/cpp

#include <cmath>
double log(double a, double b)
{
    return log(b) / log(a);
}

long zeros(long n) {
  int ans = 0, k = log(5, n);
  for (int i = 1; i <= k; i++) {
    ans += (n/pow(5,i));
  }
  return ans;
}
