// using incursive method to calculate C(n,k)
// pascal's triangle   C(n,k) = C(n-1,k-1) + C(n-1,k)
// from DM-rosen p353-354

#include <iostream>
using namespace std;

long BinCoe(long n, long k);

long BinCoe(long n, long k) {
    if (k == 0 || k == n)
        return (long)1;
    return BinCoe(n-1, k-1) + BinCoe(n-1, k);
}

int main() {
    long res;
    res = BinCoe(10,5);
    cout << res << endl;
}
