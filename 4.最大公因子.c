#include <stdio.h>
int main(void){
	int a,b,c,d; /*a,b为两数，c为容器，d存余数*/ 
	printf("第一个数：");scanf("%d",&a);
	printf("第二个数：");scanf("%d",&b); 
	if (a<b) {c==a;a==b;b==c;}/*确保a>b*/
	d=a%b; 
	while(d!=0){
		a=b;b=d;d=a%b;
	}
	printf("%d",b); 
	return 0;
} 
