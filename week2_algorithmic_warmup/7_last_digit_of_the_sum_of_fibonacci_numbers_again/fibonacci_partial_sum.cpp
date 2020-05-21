#include <iostream>
#include <vector>
#define ll unsigned long long int

using std::vector;

ll get_fibonacci_partial_sum_naive(ll from, ll to) {
    ll sum = 0;

    ll current = 0;
    ll next  = 1;
    ll new_current;

    for (ll i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
            sum%=10;
        }

        new_current = next%10;
        next = (next + current)%10;
        current = new_current%10;
    }

    return sum % 10;
}

int main() {
    ll from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';

    return 0;
}
