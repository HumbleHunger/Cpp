#include<stdio.h>
int main()
{
    int n,j,i=0;
    int a[100];
    scanf("%d",&n);
    if(n==0) 
        printf("ling");
    if(n<0)
    {
        printf("fu ");
        n=-n;
    }
    while(n!=0)
    {
        a[i]=n%10;
        n/=10;
        i++;
    }
    for(j=i-1;j>=0;j--){
        if(a[j] == 0)
            printf("ling");
        else if(a[j] == 1)
            printf("yi");
        else if(a[j] == 2)
            printf("er");
        else if(a[j] == 3)
            printf("san");
        else if(a[j] == 4)
            printf("si");
        else if(a[j] == 5)
            printf("wu");
        else if(a[j] == 6)
            printf("liu");
        else if(a[j] == 7)
            printf("qi");
        else if(a[j] == 8)
            printf("ba");
        else if(a[j] == 9)
            printf("jiu");
        if(j != 0)
            printf(" ");
    }
    printf("\n");
    return 0;
}

