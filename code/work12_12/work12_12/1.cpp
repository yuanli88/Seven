#include <stdio.h>
int age(int x)
{
    int z;
    if (x == 1)
        z = 20;
    else
        z = age(x - 1) + 3;
    return z;
}
int main()
{
    int i = 0;
    int j = 0;
    scanf_s("%d", &i);
    j = age(i);
    printf("%d", j);
    return 0;
}




