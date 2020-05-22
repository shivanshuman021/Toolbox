#include <iostream>
using std::cout;

int get_change(int k) {
  int m = k;
  int count=0;
  int value=0;
  count+=int(m/10);

  value+=int(m/10)*10;

  m = m - 10*count;
  count+=int(m/5);

  value+=int(m/5)*5;

  m = m - 5*int(m/5);
  count+=(m);

  return count;
}

int main() {
  int k;
  std::cin >> k;
  std::cout << get_change(k) << '\n';
}
