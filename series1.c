#include <stdio.h>
#include <math.h>
int main()

{
       int n;
       int i;
       int x;
       int f = 1;
       int p=0;
       float sum = 0;
       scanf("%d", &n);
       scanf("%d", &x);
       for (i = 1; i <= n; i++)
       {
              for (int j = 1; j <= i; j++)
              {
                     f = f * j;
              }
              p = (pow(x, i));
              if (i % 2 == 0)
              {
                     sum = sum-(float)p/f;
              }
              else
              {
                     sum = sum + (float)p/f;
              }
            p=0;
            f = 1;
       }
       printf("%f", sum);
       return 0;
}