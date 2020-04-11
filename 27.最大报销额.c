#include <stdio.h>


float output(float maxbudget,int pages){
	float each[31]={0.00};
	float money =0.00, sum=0.00,back=0.00;
	int flag = 1, tr = 0;
	char type, useless;
	for(int i = 0;i<pages;i++){
		scanf("%d ",&tr);
		for (int j = 0; j<tr; j++){
			scanf("%c:%f",&type,&money);
			scanf("%c",&useless);
			if (!(type=='A'||type=='B'||type=='C')) {
				flag = 0;
				break;
			}
			sum+=money;
			if (sum>maxbudget||money>600){
				flag = 0;
				break;
			}
		}
		if (flag) {
			// 若支票符合规则，则将总额数值记录数组，并排序
			for(int m =0;m<=i;m++){
				if(sum>each[m]) {
					for(int n=i;n>=m;n--){
						each[n+1]=each[n];
					}
					each[m]=sum;
					break;
				}
			}
		}
		flag = 1;
		sum = 0;
	}
	// 计算不超过maxbudget的最大值
	for(int i =0;i<pages;i++){
		if (back+each[i]<maxbudget){
			back+=each[i];
		} else if(back+each[i]==maxbudget) {
			return maxbudget;
		}
	}
	return back;
	
}
int main () {
	float maxbudget;
	int pages;
	int index = 0;
	float out[10]={0};
	do {
		scanf("%f %d",&maxbudget,&pages);
		out[index]=output(maxbudget,pages);
		index++;
	}while(pages&&index<=30);
	for(int i =0;i<index-1;i++){
		printf("%.2f\n",out[i]);
	}
	return 0;
}
