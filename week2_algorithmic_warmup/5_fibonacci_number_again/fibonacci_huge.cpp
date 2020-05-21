#include <iostream>
#define ll unsigned long long

void get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        std::cout<<n<<"\n";

    ll previous = 0;
    ll current  = 1;
    ll tmp_previous;

    for (ll i = 0; i < n - 1; ++i) {
        tmp_previous = previous%m;
        previous = current%m;
        current = (tmp_previous + current)%m;
    }

    std::cout<<current<<"\n";
}

int main() {
    ll n, m;
    std::cin >> n >> m;
    get_fibonacci_huge_naive(n, m);

    return 0;
}
