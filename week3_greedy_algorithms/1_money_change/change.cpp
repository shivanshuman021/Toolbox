#include <iostream>
using std::cout;

int get_change(int k) {
  int m = k;
  int count=0;
  int value=0;
  count+=int(m/10);
  //cout<<"count = "<<count<<"\n";
  value+=int(m/10)*10;
  //cout<<value<<"\n";
  m = m - 10*count;
  count+=int(m/5);
  //cout<<"count = "<<count<<"\n";
  value+=int(m/5)*5;
  //cout<<value<<"\n";
  m = m - 5*int(m/5);
  count+=(m);
  //cout<<"count = "<<count<<"\n";
  //cout<<value<<"\n";

  return count;
}

int main() {
  int k;
  std::cin >> k;
  std::cout << get_change(k) << '\n';
}
