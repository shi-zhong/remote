#include<stdio.h>
#define MAXZS 10 /*最大组数*/
int main (void)
{       int a[MAXZS][99]={{0}};
        int i=0,j=0,m=0,n=0,temp;
	double result[MAXZS];/*结果*/
	int sum[MAXZS]={0};

        do{/*读取组数*/
                for(j=0;j<=a[i][0];j++)
                        scanf("%d",&a[i][j]);
                i++;

        }while(a[i-1][0]);

        m=i;/*记录组数*/
        for(n=0;n<=m-2;n++){/*比较，交换*/
                for(i=1;i<=a[n][0]-1;i++){/*单行内排序*/
                        for(j=i+1;j<=a[n][0];j++){
                                if (a[n][i]<a[n][j]){
                                        temp=a[n][i];a[n][i]=a[n][j];a[n][j]=temp;
                                }
                        }
                }/*行内排序结束*/
		for(i=2;i<=a[n][0]-1;i++) sum[n]+=a[n][i];
		result[n]=sum[n]/(a[n][0]-2);
		printf("%.2f\n",result[n]);
        }
}
