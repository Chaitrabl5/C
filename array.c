#include<stdio.h>
void main()
{
    int arr[3]={0,9};
    int *p;
    p=&arr[0];
    printf("%d\n",p);
    printf("%d\n",&arr[0]);
    printf("%d\n",*arr);
    printf("%d\n",*p);
}