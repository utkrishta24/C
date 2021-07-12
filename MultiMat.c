#include<stdio.h>


int main()
{
int n;
scanf("%d", &n);
int a1[n][n],a2[n][n],a3[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    scanf("%d", &a1[i][j]);
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    scanf("%d", &a2[i][j]);
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
   {
       a3[i][j]=0;
   }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
   {
     
     a3[i][j]=a3[i][j] + (a1[i][j]*a2[j][i]);
            
   }
}
printf("\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    printf("%d ", a3[i][j]);
    printf("\n");
}
return 0;
}