#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

void printArr(vector <int> &arr)
{
    std::cout<<"\n";
    for (int i=0;i<arr.size();++i)
        std::cout<<arr[i]<<" ";
    std::cout<<"\n";
}

long long max_dot_product(vector<int> a, vector<int> b) {
  std::sort(a.begin(),a.end());
  std::sort(b.begin(),b.end());
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    result += ((long long) a[i]) * b[i];
  }
  return result;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
