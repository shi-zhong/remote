#include<stdio.h>
void putout(int line,char c){
	for(int i=0;i<=line-1;i++){
		printf("%c",c);
	}
}
int main(void){
	double	num;
	char letter;
	int line;
	scanf("%lf %c",&num,&letter);
	line=(int)(num/2+0.5);
	for(int i=0;i<=line-1;i++){
		if(i==0||i==line-1){
			putout(num,letter);
			printf("\n");
		}else{
			printf("%c",letter);
			putout(num-2,' ');
			printf("%c\n",letter);
		}
	}
	return 0;
}
