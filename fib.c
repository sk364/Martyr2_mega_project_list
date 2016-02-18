#include<stdio.h>

int main(){
	int n, i;
	unsigned long long int s1=0, s2=1, s3;

	printf("How many fibonacci numbers to be displayed: ");
	scanf("%d",&n);

	if (n <= 0){
		printf("Please enter a number greater than ZERO.");
		return 0;
	}

	printf("First %d Fibonacci Numbers Are:\n", n);

	if (n == 1){
		printf("%llu\n",s1);
		return 0;
	}

	printf("%llu\n%llu\n",s1,s2);

	if (n == 2){
		return 0;
	}

	for(i=0; i<n-2; i++){
		s3 = s2+s1;

		s1 = s2;
		s2 = s3;

		printf("%llu\n",s3);
	}

	return 0;
}
