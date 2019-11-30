#include<stdio.h>
int main(void){
	int n;
	char str;
	int out[100]={0};
	scanf("%d\n",&n);
	for (int i=0;i<=n-1;i++){
		do{
			str=getchar();
			if(str>='0'&&str<='9'){
				out[i]++;
			}
		}while(str!='\n');
	}
	for (int i=0;i<=n-1;i++){
		printf("%d\n",out[i]);
	}
	return 0;
}
