#include <stdio.h>
#include<string.h>
struct student
{
       char name[10];
       int class;
       char sec[1];
       char subject[10];
       struct dob
       {
              int date;
              char month[10];
              int year;
       } day;
};
int main()

{
       struct student std;
       strcpy(std.name, "isha");
       std.class = 12;
       strcpy(std.sec, "T");
       std.day.date = 14;
       strcpy(std.day.month, "sept");
       std.day.year = 2003;
       printf("%d ", std.day.date);
       printf("%s ",std.day.month);
       printf("%d ", std.day.year);
       getchar();
       return 0;
}