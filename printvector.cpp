#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
     cout<<"size:"<<v.size()<<endl;
    for( int i=0;i<v.size();i++)
    {
        cout<< v[i]<<" ";
    }
    cout<<endl;
}

int main() {
  vector<int> v;
  int n;                   // vector<int> v(5);  in result it will show 5 zeroes
  cin>>n;                  // printVector(v);
  for( int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      printVector(v);
      v.push_back(x);
      
  }
  printVector(v);
}

