#include <iostream>
#define ll unsigned long long int

int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    ll previous = 0;
    ll current  = 1;
    ll sum      = 1;

    for (ll i = 0; i < n - 1; ++i) {
        ll tmp_previous = previous%10;
        previous = current%10;
        current = (tmp_previous + current)%10;
        sum += (current * current);
        sum=sum%10;
    }

    return sum % 10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares_naive(n)<<"\n";

    return 0;
}
