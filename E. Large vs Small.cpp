#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  scanf("%d",&T);
  float maxm=0,minm=999;
  int i=1;
  while(T--){
        float a;
        scanf("%d",&a);
        if(a>0){
        if(a>maxm){
            maxm =a;
        }
        if(a<minm){
            minm=(float)a;
        }
        printf("Case %d: %.2f\n",i,maxm/minm);
        i++;


  }
  }
 return 0;

}
