#include <stdio.h>
int main()
{
    
    int a[10], x, ind;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter element to be deleted");
    scanf("%d", &x);
    int i;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == x)
        {
            break;
        }
    }
    if (i == 10)
    {
        ind = 10;
    }
    else
    {
        for (int j = i; j < 10; i++)
        {
            a[j] = a[j + 1];
        }
        ind = 9;
    }
    for (i = 0; i < ind; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
