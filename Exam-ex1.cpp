#include <stdio.h>

int isEvenNumber(int num) {
	if(num % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(isEvenNumber(num) == 1) {
		printf("%d is an even number.", num);
	}
	else {
		printf("%d is an odd number.", num);
	}
	return 0;
}
