#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int x = 100;
    for(int i = 1 ; i <= n ; i++){
    printf("%d\n",x);
    x = x - 3;
    }
}