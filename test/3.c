#include<stdio.h>
int main(){
	int n,m,i,j,sum,num=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		if(i==1)
            continue;
		sum=1;
		for(j=2;j<i;j++){
			if(i%j==0) 
                sum+=j;
        }
		if(sum==i){
			printf("%d = 1",i);
			for(j=2;j<i;j++){	
				if(i%j==0) 
					printf(" + %d",j);
            }
            printf("\n");
			num++;
		}
	}
	if(num==0) 
        printf("None\n");
	return 0;
} 

