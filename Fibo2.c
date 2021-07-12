#include<stdio.h>
// using namespace std;

void fibo(int n)
{
int a=1,b=1,c;
c=a+b;
    printf("%d %d ",a,b);   
    for(int i=0;i<n-2;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    fibo(n);
    
return 0;
}