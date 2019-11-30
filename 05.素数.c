#include <stdio.h>
int main(void){
	int i,j,flag=1,turn=0;
	for (i=2;i<=100;i++,flag=1){
		for (j=2;j<=(i/2);j++){
			if (i%j==0) {flag=0;break;}
		}
		if (flag) {printf("%d;",i);turn++;}
		if (turn%5==0) {printf("\n");turn=1;}/*逢5换行*/ 
		
	}
	return 0;
} 

