//https://www.codewars.com/kata/5552101f47fc5178b1000050/train/cpp

class DigPow
{
public:
    static int digPow(int n, int p){
    int k = 0, q = n;
    while (q > 0) {
        q /= 10;
        p++;
    }
    p--;
    q = n;
    while (q > 0) {
        k += pow(q % 10, p);
        q /= 10;
        p--;
    }
    int z;
    if (k % n == 0) {
        z = k / n;
        return z;
    }
    else return -1;
}
};
