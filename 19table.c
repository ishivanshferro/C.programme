#include<stdio.h>
int main(){
    int x;
    printf("enter the number whose table you want : ");
    scanf("%d",&x);
    int n;
    n = 10;
    for(int i = 1; i <=n ; i++){
        printf("%d\n",x*i);
    }
    return 0;
}