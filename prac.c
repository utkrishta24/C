// WAP to implement strlen(), strcat(),strcmp(), strcpy() using user defined functions.
#include<stdio.h>
#include<string.h>

void len(char str[]){
int l;
l=strlen(str);
printf("\nLength of string is %d\n",l);
}

void cat(char str1[],char str2[]){
strcat(str1,str2);
puts(str1);
}

void cmp(char str1[], char str2[]){
int res;
res=strcmp(str1,str2);
if(res==1)
{
    printf("\nStrings are equal\n");
}
else
{
    printf("\nStrings are not equal\n");
}

}
void cpy( char str1[],char str2[]){
    strcpy(str1,str2);
    printf("\n String 1 after copy: ");
    puts(str1);
    printf("\n String 2 without copy: ");
    puts(str2);
}

int main()
{  
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    printf("\n%s\n", str1);
    printf("%s\n", str2);
    len(str1);
    cat(str1,str2);
    cmp(str1, str2);
    cpy(str1,str2);
    return 0;
}