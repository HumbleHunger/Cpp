/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: 2020年10月30日 星期五 12时48分48秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a[2][2];
    printf("%p %p %p\n",&a,&a[0],&a[0][0]);
    printf("%p %p %p\n",&a+1,&a[0]+1,&a[0][0]+1);
}
