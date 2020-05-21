#include <iostream>
#define ll long long int
void get_fibonacci_last_digit_naive(ll n) {
    if (n <= 1)
        std::cout<<n;

    ll previous = 0;
    ll current  = 1;
    ll tmp_previous;
    for (ll i = 0; i < n-1 ; ++i) {
        tmp_previous = previous%10;
        previous = current%10;
        current = (tmp_previous + current)%10;

        //std::cout<<current<<"\n";
    }
    std::cout<<current%10<<"\n";
}   

int main() {
    ll n;
    std::cin >> n;
    get_fibonacci_last_digit_naive(n); 
    //std::cout << c << '\n';

    return 0;
    }
