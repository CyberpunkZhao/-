#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a;
    scanf("%d",&a);
    bool b=a;
    a=b;
    printf("%d",b);
    return 0;
}