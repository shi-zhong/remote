#include<stdio.h>
void out(int a, int b,int c){
	(a+b>c)?printf("true\n"):printf("false\n");	
}
int main (void)
{       int num[10][3];
        int t,i=0;
	scanf("%d",&t);
        do{/*input*/
        	scanf("%d %d %d",&num[i][0],&num[i][1],&num[i][2]);
                i++;
        }while(i<=t-1);
	for(i=0;i<=t-1;i++){
		printf("Case #%d:",i+1);
		out(num[i][0],num[i][1],num[i][2]);
	}
}

