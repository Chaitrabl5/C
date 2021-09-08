#include<stdio.h>
void print(char* c)
{
    int i=0;
while(*c!="\0")
{
    printf("%c",*c);
    c++;
}
printf("\n");
}
void main()
{
    char c[8]="chaitra\0";
    print(c);
}