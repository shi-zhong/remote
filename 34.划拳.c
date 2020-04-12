#include <stdio.h>
int main () {
	int k,a1,a2,b1,b2,win1=0,win2=0;
	int flag1=0,flag2 =0,useless;
	scanf("%d",&k);
	for (int j=0;j<k;j++){
		scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
		if ((a1+b1==a2)!=(a1+b1==b2)) {
			if(a1+b1==a2) {
				win2++;
			} else {
				win1++;
			}
		}
	}
	printf("%d %d",win1,win2);
	return 0;
}
