#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector <int>v;
  
  int count =0;
  
  for( int i=1;i<=n;i++)
  {
      if(n%i==0)
      {
         count++;
       v.push_back(i);
         
      }
      
     
  }
  cout<<count<<endl;
  for(int i=0;i<v.size();i++)
  {
      cout<<v[i]<<" ";
  }
   
	return 0;
}

