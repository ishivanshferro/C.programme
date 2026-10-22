#include<stdio.h>
int main(){
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    for(int i = 4 ; i <=3*x+1 ; i= i+3){
        printf("%d\n",i);
    }
    return 0;
}