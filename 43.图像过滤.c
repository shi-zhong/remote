#include <stdio.h>

int main () {
	int x, y, siftera, sifterb, replacer;
	int this;
	int img[2500];
	scanf("%d %d %d %d %d", &x, &y, &siftera, &sifterb, &replacer);
	for (int i = 0; i<x; i++) {
		for (int j = 0; j<y; j++) {
			scanf("%d", &this);
			if (this>=siftera&&this<=sifterb) {
				img[i*y+j]=replacer;
			} else {
				img[i*y+j]=this;
			}
		}
	}
	printf("\n\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%03d ", img[i*y+j]);
		}
		printf("\n");
	}
	return 0;
}
