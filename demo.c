#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    for(int i = 5; i <= 5 + (n-1)*4 ; i = i+4){
    printf("%d\n",i);
    }
    return 0;
}