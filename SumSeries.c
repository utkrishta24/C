#include <stdio.h>
#include <math.h>
int main()

{int i;
int x;
 int f=1;
 int sum=0;
       int n;
       scanf("%d",&n);
       scanf("%d",&x);
       for(i=1;i<=n; i++)
       {
              for (int j=1;j<=i;j++)
              {
                     f=f*j;
              }
              sum=sum+(pow(x,i))/f;
              f=1;
       }
       printf("%d",sum);
       return 0;
}