#include<stdio.h>

struct employee{
    char name[50];
    char designation[50];
    int empId;
}s[50];

int main(){
    
    int i;
    printf("Enter information: \n");
    for(i=0;i<2;i++)
    {
        s[i].empId=i+1;
        printf("\nFor employee id %d,\n", s[i].empId);
        printf("\nEnter name\n");
        scanf("%s",s[i].name);
        printf("\nEnter designation\n");
        scanf("%s",s[i].designation);
    }
    for(i=0;i<2;i++)
    {
        printf("\nEmployee id %d,\n", i+1);
        puts(s[i].name);
        puts(s[i].designation);
        printf("\n");
    }
 return 0;
}
