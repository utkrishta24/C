Utkrishta Sinha, [30.10.21 14:48]
#include <stdio.h>
int main()
{
    int n1,n2,c[5],x=0;
    
   scanf("%d",&n1);
   scanf("%d",&n2);
   int a[n1];
   int b[n2];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n1;i++)
    {  int count=0;
        for(int j=0;j<n2;j++)
        {
            if(b[j]==a[i])
            {
               
              count++;
              
            }
           if(count==0)
            {
               c[x]=a[i];
               x++;
            }
            
            
        }
    }
    for(int i=0;i<n1;i++)
    {  int count=0;
        for(int j=0;j<n2;j++)
        {
            if(a[j]==b[i])
            {
               
              count++;
              
            }
           if(count==0)
            {
               c[x]=b[i];
               x++;
            }
            
            
        }
    }
    
    for(int i=0;i<x;i++)
    {
        printf("%d",c[i]);
    }
    
        
    return 0;
    
}