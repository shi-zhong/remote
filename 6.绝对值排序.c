#include<stdio.h>
#include<stdlib.h>
#define MAXZS 10 /*最大组数*/
int main (void)
{	int a[MAXZS][99]={{0}};
	int i=0,j=0,m=0,n=0,temp;
	do{/*读取组数*/
		for(j=0;j<=a[i][0];j++)
			scanf("%d",&a[i][j]);
		i++;

	}while(a[i-1][0]);
	m=i;/*记录组数*/
	for(n=0;n<=m-2;n++){/*比较，交换*/
		for(i=1;i<=a[n][0]-1;i++){
			for(j=i+1;j<=a[n][0];j++){
				if (abs(a[n][i])<abs(a[n][j])){
					temp=a[n][i];a[n][i]=a[n][j];a[n][j]=temp;
				}
			}
		}
	}
	for(i=0;i<=m-2;i++){/*打印数字，m-1为组数*/
		for(j=1;j<=a[i][0];j++)
			printf("%d ",a[i][j]);
	printf("\n");
	}
	return 0; 
}
