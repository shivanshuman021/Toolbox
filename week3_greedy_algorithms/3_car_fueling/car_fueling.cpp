#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

void printArr(vector <int> &arr)
{
    cout<<"\n";
    for (int i=0;i<arr.size();++i)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int compute_min_refills(int dist, int tank, vector<int> & stops,int n) {
    int x,y,capacity = tank - stops[0];
    int count=0;
    for (int j=1;j<n-1;++j)
    {
        x = stops[j]-stops[j-1];
        y = stops[j+1]-stops[j];

        if (capacity>=y) 
            capacity-=y;
        else if (capacity <= y && y<=tank){
            capacity = tank;
            count++;
        }

        else if (capacity<=y && y>=tank) return -1;
        
    }

    return count;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops,n) << "\n";

    return 0;
}
