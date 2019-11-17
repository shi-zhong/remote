#include<stdio.h>
int main(void){
	int num1,num2;
	int a,b,c,d; /*c为容器，d存余数*/
        scanf("%d %d",&num1,&num2);
        if (num1<num2) {c=num1;num1=num2;num2=c;}/*确保a>b*/
	a=num1;b=num2;
	d=num1%num2;
        while(d!=0){
                a=b;b=d;d=a%b;
        }
        printf("%d",num1*num2/b);

	return	0;
}
