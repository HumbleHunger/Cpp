/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2020年10月30日 星期五 12时34分32秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char ch[17]="Xiyou_Linux_Group";
    char *str="Xiyou_Linux_Group";
    printf("%s\n%s\n",ch,str);
    *ch='K';
    printf("Hello");
    *str='K';
    printf("World");
    return 0;
}
