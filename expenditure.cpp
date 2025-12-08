#include <stdio.h>
int main()
{
    int X, Y;
    scanf("%d", &X);
    scanf("%d", &Y);
    int total = Y * 30;
    if (X >= total)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
    return 0;
}