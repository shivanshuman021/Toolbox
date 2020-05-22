#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;


void printArr(int capacity,vector<int>&v)
{
  for (int i=0;i<capacity;++i)
    cout<<v[i]<<" ";
    cout<<"\n";
}

void sort(int capacity,vector<int>&a,vector<int>&b,vector<int>&d)
{
  int s;
  while (s>0)
  {
    s=0;
    for (int i=0;i<capacity-1;++i)
    {
      if (d[i]<d[i+1])
      {
        std::swap(d[i],d[i+1]);
        std::swap(a[i],a[i+1]);
        std::swap(b[i],b[i+1]);
        s+=1;;
      }
    }
    //printArr(capacity,d);
  }
}

double get_optimal_value(int n,int w, vector<int> &weights, vector<int> &values,vector<int> &d) {
  double value = 0.0;
  int wt=0;
  for (int i=0;i<n;++i)
  {
    if (wt>=w) break;
    else
    {
      if(weights[i]<=(w-wt)) 
      {
        wt+=weights[i];
        value += values[i];
        //cout<<"weight = "<<wt<<" value = "<<value<<"\n";
      }

      else{
        wt += (w-wt);
        value+= double(d[i]*(w-wt));
        //cout<<"weight = "<<wt<<" value = "<<value<<"\n";
      }
    }
  }
  
  return value;
}


int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
    d[i] = values[i]/weights[i];
  }
  sort(n,values,weights,d);
  double optimal_value = get_optimal_value(n,capacity, weights, values,d);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
