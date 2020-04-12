#include <stdio.h>
#include <string.h>
int valid (int year,int month,int day) {
	if(year>2014||year<1814) {return 0;}
	if(year==2014) {
		if(month>9) {
			return 0;
		} else if(month=9&&day>6){
			return 0;
		} else {
			return 1;
		}
	}
	if(year==1814) {
		if(month<9) {
			return 0;
		} else if (month==9&&day<6) {
			return 0;
		} else {
			return 1;
		}
	}
	return 1;
}
int older(int this[3],int old[3]){
	if (this[0]>old[0]) return 0;
	if (this[0]==old[0]) {
		if (this[1]>old[1]) return 0;
		if (this[1]==old[1]) {
			if (this[2]<old[2]) return 1;
			return 0;
		}
		return 1;
	}
	return 1;
}
int younger(int this[3],int young[3]){
	if (this[0]<young[0]) return 0;
	if (this[0]==young[0]) {
		if (this[1]<young[1]) return 0;
        	if (this[1]==young[1]) {
			if (this[2]>young[2]) return 1;
        		return 0;
       	 	}
	        return 1;
	}
	return 1;
}
int main(){
	char name[6]="",oldest_n[6]="me",youngest[6]="ME";
	int valid_b=0,this[3],oldest[3]={2014,9,6},young[3]={1814,9,6};
	int k;
	scanf("%d",&k);
	while (k>0) {
		if (valid(this[0],this[1],this[2])) {
			valid_b++;
			printf("%d %d\n",older(this,oldest),younger(this,young));
			if (older(this,oldest)) {
				memcpy(oldest,this,sizeof(this));
				strcpy(oldest_n,name);
			}
			if(younger(this,young)) {
				memcpy(young,this,sizeof(this));
				strcpy(youngest,name);
			}
		}
		k--;
	}
	printf("%d %s %s",valid_b,oldest_n,youngest);
	return 0;
}
