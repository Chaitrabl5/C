
#include<stdio.h>
void doubles(int* a,int size)
{
for(int i=0;i<size;i++)
{
    a[i]=2*a[i];
}
}
void main()
{
    int a[]={1,2,4,6,8};
    int i;
int size=sizeof(a)/sizeof(a[0]);
doubles(a,size);
for(i=0;i<size;i++)
{
printf("%d\n",a[i]);
}
}