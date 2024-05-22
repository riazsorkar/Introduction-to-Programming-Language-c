#include<stdio.h>
int main(){
    int n,m1,m2,m3,result;
    float x,y,z,div,div2;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%d %d %d",&m1,&m2,&m3);
        x = m3*1.0;
        y = m1*1.0 + m2*1.0;
        div = x/y;
        z = m2*1.0;
        div2 = div * z;
        result = div2;
        if(div2>result){
            result++;
        }
        printf("%d\n",result);
    }
    return 0;
}