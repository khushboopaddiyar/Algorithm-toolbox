#include<iostream>
int euclid_gcd(long a, long b) {
    int divisor = a >= b ? a : b;
    int dividend = a <= b ? a : b;
    while (divisor != 0) {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;
}

long long lcm_fast(long long a, long long b) {
    return (a * b) / euclid_gcd(a, b);
}

int main() {
    long long a, b;
    std::cin >> a >> b;
    std::cout << lcm_fast(a, b) << std::endl;
    return 0;
}
