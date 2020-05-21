#include <iostream>
#define ll long long int

ll gcd_naive(ll a, ll b) {
  ll min,max,temp;
  if (a>b) {max = a;min=b;}
  else {max = b;min = a;}

  temp = max%min;

  if (temp==0) return min;
  else{
    max = min;
    min = temp;
    return gcd_naive(max,min);
  } 
}

int main() {
  ll a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
