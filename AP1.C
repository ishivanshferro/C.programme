#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int a = 1;
    for(int i = 1;i <= n; i++){
        if(i==1){
       printf("%d\n",a);
       a = a + 1;
    }
    printf("%d\n",a);
    a = a+a;
}
    return 0;
}