#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
     cout<<"size:"<<v.size()<<endl;
    for( int i=0;i<v.size();i++)
    {
        cout<< v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
}

int main() {
  vector<int> v;                         //vector<int > v(5,6);
  v.push_back(7);
  v.push_back(6);
  
  vector<int> &v2=v;
  v2.push_back(5);
   printVector(v);
                                                         //  v.pop_back();
    printVector(v);
    printVector(v2);
}
