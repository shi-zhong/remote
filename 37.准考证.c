#include<stdio.h>
int main(void){
	int n;
	long long passp[1001];
	int sit[1001];
	long long cdpass;
	int cd;
	int m;
	int search;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&cdpass);
		scanf("%d",&cd);
		passp[cd]=cdpass;
		scanf("%d",&sit[cd]);
	}
	scanf("%d",&m);
	for (int i=0;i<=m-1;i++){
		scanf("%d",&search);
		printf("%lld %d",passp[search],sit[search]);
		if(!i==m-1){printf("\n");}
	}
	return 0;
}
