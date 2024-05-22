#include<stdio.h>
int main(){
    int n,m,yes=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        int p[m];
        for(int j=0;j<m;j++){
            scanf("%d",&p[j]);
        }
        int q;
        scanf("%d",&q);

        for(int j=0;j<m;j++){
            if(p[j]==q){
                yes=1;
            }else{
                yes;
            }
        }
        if(yes==0){
            printf("NO\n");
            yes = 0;
        }else{
            printf("YES\n");
            yes =0;
        }
    }
    return 0;
}