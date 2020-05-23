#include <iostream>
#include <vector>

using std::vector;

void printArr(vector<int>v)
{
  for (int i=0;i<v.size();++i) std::cout<<v[i]<<" ";std::cout<<std::endl;
}

vector<int> optimal_summands(int n) {
  vector<int> summands;
  
  int n_sum=0;int total=0;
  int x,i=1,rem;
  while(total<n)
  {
    x=i;
    total+=x;
    rem=n-total;
    if (x>=rem) {x=x+rem;total+=rem;}
    summands.push_back(x);
    ++i;
  }

  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
