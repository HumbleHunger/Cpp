/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年10月24日 星期六 21时58分07秒
 ************************************************************************/
说说下面代码的输出结果，说明这两个代码的区别，说说你对宏的理解

#define X 3.14
int main()
{
    int r=5;
    printf("%d\n",r*r*X);
    return 0;
}

int X=3.14;
int main()
{
    int r=5;
    printf("%d\n",r*r*X);
    return 0;
}


#define MALLOC(n,type) (type *)malloc((n)*sizeof(type))


