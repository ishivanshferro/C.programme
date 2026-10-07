#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    int a = 1;
    for (int i = 1; i <= x; i++)
    {
        printf("%d\n", a);
        a = a * 2;
    }
    return 0;
}