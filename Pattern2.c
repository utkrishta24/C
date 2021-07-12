#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("B");
            }
            else{
                printf("A");
            }
        }
        printf("\n");  
    }
    return 0;
}