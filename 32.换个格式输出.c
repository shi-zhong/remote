#include<stdio.h>
int main(void){
	int num;
	int position[3];
	scanf("%d",&num);
	position[0]=num/100;
	position[1]=(num/10)%10;
	position[2]=num%10;
	for(int i=0;i<=position[0]-1;i++) printf("%c",'B');
	for(int i=0;i<=position[1]-1;i++) printf("%c",'S');
	for(int i=0;i<=position[2]-1;i++) printf("%d",i+1);
	return 0;
}
