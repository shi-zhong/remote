#include <stdio.h>
int main(void){
	int a,b,c,d; /*a,bΪ������cΪ������d������*/ 
	printf("��һ������");scanf("%d",&a);
	printf("�ڶ�������");scanf("%d",&b); 
	if (a<b) {c==a;a==b;b==c;}/*ȷ��a>b*/
	d=a%b; 
	while(d!=0){
		a=b;b=d;d=a%b;
	}
	printf("%d",b); 
	return 0;
} 
