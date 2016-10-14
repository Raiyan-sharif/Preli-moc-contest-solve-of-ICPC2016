#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long t,n;
  cin>>t;
  while(t--)
  {
      cin>>n;
      if(n<0)
      {

          for(long long  i=n;i<=0;i++)
          {
              if(i==0){
              cout<<i<<endl;
              break;
            }
             cout<<i<<" ";
          }
      }
      else{
      for(long long  i=0;i<=n;i++)
      {
          if(i==n){
              cout<<i<<endl;
              break;
          }
          cout<<i<<" ";
      }
      }
  }  return 0;
}
