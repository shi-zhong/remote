#include <stdio.h>
int main(void)
{
	int side[3];
	int i,j;
	printf("��1����:");scanf("%d",&side[0]);
	printf("��2����:");scanf("%d",&side[1]);
	printf("��3����:");scanf("%d",&side[2]);
	printf("����ֵ��");/*����*/ 
	for(i=0;i<=1;i++)
		for(j=1;j<=2;j++)
			if (side[i]>side[j]) {
				side[3]=side[i];side[i]=side[j];side[j]=side[3];
			}	/*��������*/	
	if ((side[0]+side[1])>side[2])/*�ж��Ƿ���������*/{ 
		if (side[0]==side[1]&&side[1]==side[2])
			printf("1"); 
		else if(side[0]==side[1]||side[1]==side[2])
			printf("2");
		else
			printf("3");\
		}
	else
		printf("0");
		return 0;
}
