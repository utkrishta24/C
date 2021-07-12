#include <stdio.h>
#include <math.h>
int len(int i)
{
       int count = 0;
       while (i != 0)
       {
              i = i / 10;
              count++;
       }
       return count;
}
int check(int i, int c)
{
       int arm = 0, r;
       while (i != 0)
       {
              r = i % 10;
              arm = arm + pow(r, c);
              i = i / 10;
       }
       return arm;
}
int main()
{
       int n;
       scanf("%d",&n);
       for (int i = 1; i <= n; i++)
       {
              int c = len(i);
              int chk = check(i, c);
              if (chk == i)
              {
                     printf("%d ", i);
              }
       }

       return 0;
}