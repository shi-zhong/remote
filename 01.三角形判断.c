#include <stdio.h>
int main(void)
{
        int side[3];
        int i,j;
        printf("第一个数:");scanf("%d",&side[0]);
        printf("第二个数:");scanf("%d",&side[1]);
        printf("第三个数:");scanf("%d",&side[2]);
	printf("返回值");/*输入*/ 
        for(i=0;i<=1;i++)
                for(j=1;j<=2;j++)
                        if (side[i]>side[j]) {
                                side[3]=side[i];side[i]=side[j];side[j]=side[3];
                        }       /*三边排序*/
        if ((side[0]+side[1])>side[2])/*判断是否是三角形*/{ 
                if (side[0]==side[1]&&side[1]==side[2])
                        printf("1");
                else if(side[0]==side[1]||side[1]==side[2])
                        printf("2");
                else
                        printf("3");
                }
        else
	printf("0");
	printf("\n");
	return 0;
}

