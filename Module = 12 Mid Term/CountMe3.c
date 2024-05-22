#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char a[10001];
    int sml = 0, cpt = 0, dig = 0;
    for(int i=0; i<n;i++){
        scanf("%s", &a);
        for(int j=0;j<strlen(a);j++){
            if(a[j]>= 'a' && a[j]<= 'z'){
                sml++;
            } else if(a[j]>= 'A' && a[j]<= 'Z'){
                cpt++;
            }else{
                dig++;
            }
        }
        printf("%d %d %d\n",cpt, sml, dig);
        sml = 0, cpt = 0, dig = 0;
    }
    
    return 0;
}