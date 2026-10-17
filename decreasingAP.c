#include<stdio.h>
int main (){
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);
    int a = 100;
    for(int i = 1; i <= x; i++){
    printf("%d\n",a);
    a = a - 3;
    }
    return 0;
}