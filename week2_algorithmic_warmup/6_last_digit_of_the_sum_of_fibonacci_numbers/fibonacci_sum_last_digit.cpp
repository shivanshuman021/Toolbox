#include <iostream>
#define ll unsigned long long int

void fibonacci_sum_naive(ll n) {
    if (n <= 1)
        std::cout<<n<<"\n";

    ll previous = 0;
    ll current  = 1;
    ll sum      = 1;
    ll tmp_previous;

    for (ll i = 0; i < n - 1; ++i) {
        tmp_previous = previous%10;
        previous = current%10;
        current = (tmp_previous + current)%10;
        sum += current;
        //sum=sum%10;
        //std::cout<<sum<<"\n";
    }

    std::cout<<sum % 10<<"\n";
}

int main() {
    ll n = 0;
    std::cin >> n;
    fibonacci_sum_naive(n);

    return 0;
}
