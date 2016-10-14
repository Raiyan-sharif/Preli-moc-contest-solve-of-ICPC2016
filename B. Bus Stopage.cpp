#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int T,d=0,l=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int N;
        scanf("%d",&N);
        for(int j=1;j<N;j++){
            int a,b;
            scanf("%d %d",&a,&b);
            d+=a;
            d-=b;

            if(l<d){
                l=d;

            }
            else{

            }
        }
        printf("Case %d: %d\n",i+1,l);
        l=0;
        d=0;
    }
    return 0;
}
