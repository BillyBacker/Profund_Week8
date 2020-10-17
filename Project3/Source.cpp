#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int k = 0;
	int min = 0;
	int max = 0;
	int count = 0;
	scanf("%d", &k);
	min = k + 1;
	max = k * (k + 1);
	for (int first = min; first <= max; first++) {
		for (int second = max; second >= min; second--) {
			if ((first+second)*k == first*second) {
				count++;
				printf("%d. 1/%d + 1/%d = 1/%d \n", count, first, second, k);
			}
		}
	}
	printf("There is %d Solution.", count);

	return 0;
}