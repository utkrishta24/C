#include <stdio.h>
int main()
{
    int a[5], b[5], c[5], i, j, count, x = 0;
    printf("Enter elements of A:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("Enter elements of B:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < 5; i++) //A-B
    {   count = 0;
        for (j = 0; j < 5; j++)
        {
            if (b[j] == a[i])
            {
                count++;
            }
        }
        if (count == 0)
        {
            c[x] = a[i];
            x++;
        }
    }
    
    for (i = 0; i < 5; i++) //B-A
    {   count = 0;
        for (j = 0; j < 5; j++)
        {
            if (a[j] == b[i])
            {
                count++;
            }
        }
        if (count == 0)
        {
            c[x] = b[i];
            x++;
        }
    }
    printf("C=(A-B)U(B-A) is:\n");
    for (i = 0; i < x; i++)
        printf("%d ", c[i]);
    return 0;
}