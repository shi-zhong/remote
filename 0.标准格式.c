#include<stdio.h>
#define MAXZS 10 /*最大组数*/
int main (void)
{       int a[MAXZS][99]={{0}};
        int i=0,j=0,m=0,n=0,temp;
        do{/*读取组数*/
                for(j=0;j<=a[i][0];j++)
                        scanf("%d",&a[i][j]);
                i++;

        }while(a[i-1][0]);
        m=i;/*记录组数*/
}

