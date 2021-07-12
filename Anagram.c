#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[500], s[500];
    gets(s);
    gets(a);
    int n1=strlen(s);
    int n2=strlen(a);
      if(n1!=n2){
         printf("String is not an anagram");
      return 0;}
    for(int i=0;i<n1-1;i++)
    {
        for(int j=i+1;j<n1;j++)
        {
            if(s[i]>s[j]){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;}
            
            if(a[i]>a[j]){
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;}
        }
    }
        for(int i=0;i<n1;i++)
        {
            if(s[i]!=a[i])
            {
                printf("String is not an anagram");
                return 0;
            }
        }
    
    
         printf("String is an anagram");
    
    return 0;
}