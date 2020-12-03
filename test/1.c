#include<stdio.h>
int main()
{
    int N;
    double a=1,s=0,b=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        s+=(1/a)*b;
        a+=3;
        b=-b;
    }
    printf("sum = %.3lf\n",s);
    return 0;
}
