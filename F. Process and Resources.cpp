#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x;
    long long int pid,rid;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
         map<long long int,long long int>mp;
        while(n--)
        {


            scanf("%d",&x);
            if(x==1)
            {
               scanf("%lld %lld",&pid,&rid);
               if(mp[pid]==0 && mp[rid]==0)
               {
                   printf("Y\n");
                   mp[pid]=rid;
                   mp[rid]=pid;
               }


               else
               {
                  printf("N\n");
               }

            }

            else
            {
                scanf("%lld",&rid);

                if(mp[rid]==0)
                {
                    printf("F\n");
                    //mp[rid]=pid;
                }

                else
                {
                    cout<<mp[rid]<<"\n";
                    mp[rid]=0;
                }
            }

        }
         mp.clear();
    }

    return 0;
}
