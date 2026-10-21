#include<stdio.h>
int main (){
    int number;
    printf("enter the number : ");
    scanf("%d",&number);
    for(int i = 1; i <= number ; i++){
        printf("hello\n");
    }
    return 0;
}