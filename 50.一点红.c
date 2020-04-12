#include <stdio.h>
long abso (long num) {
	if (num) {
		return num;
	} else {
		return -num;
	}
}

int check (int x, int y,int m,int n,long img[1000][1000], long differ) {
	for (int w = x-1;w<=x+1; w++) {
		for (int h = y-1;h<=y+1; h++) {
			if (h>=0&&w>=0&&w<m&&h<n&&(w!=x&&h!=y)) {
				if (abso(img[y][x]-img[h][w])<=differ) {
					return 0;
				}
			}
		}
	}
	return 1;
}
int main () {
	int m,n;
	long differ;
	long img[1000][1000];
	long output[4]={0,0,0,0};
	scanf("%d %d %ld",&m,&n,&differ);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%ld",&img[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (check(j,i,m,n,img,differ)) {
				if (!output[0]) {
					output[0]=1;
				 	output[1]=j+1;
					output[2]=i+1;
					output[3]=img[i][j];
				} else {
					printf("Not Unique");
					return 0;
				}
			}
		}
	}
	if (output[0]) {
		printf("(%ld, %ld): %ld", output[1], output[2], output[3]);
	} else {
		printf("Not Exist");
	}
	return 0;
}
