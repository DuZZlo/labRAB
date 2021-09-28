
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	float d, avg; 
	//задание 1
	printf("Enter a, b:\n");
	scanf_s("%d%d", &a, &b);
	printf("S = %d, P = %d\n\n", a * b, 2*(a+b));
	//задание 2
	printf("Enter d:\n");
	scanf_s("%f", &d);
	printf("L = %.2f\n\n", d * 3.14);
	//задание 3
	printf("Enter a, b:\n");
	scanf_s("%d%d", &a, &b);
	printf("average is %.2f\n\n", avg = (float)(a+b)/2);
	//задание 4
	float ch1, ch2, pow1, pow2;
	printf("Enter non zero ch1, ch1:\n");
	scanf_s("%f%f", &ch1, &ch2);
	while (ch1 == 0 || ch2 == 0) {
		printf("\nEnter non zero ch1, ch1:\n");
		scanf_s("%f%f", &ch1, &ch2);
	}
	pow1 = pow(ch1, 2);
	pow2 = pow(ch2, 2);
	printf("+ is: %.2f\n- is: %.2f\n* is: %.2f\n/ is: %.2f\n\n", pow1 + pow2, pow1 - pow2, pow1 * pow2, pow1 / pow2);
	//задание 5
	float abs1, abs2;
	printf("Enter non zero ch1, ch1:\n");
	scanf_s("%f%f", &ch1, &ch2);
	while (ch1 == 0 || ch2 == 0) {
		printf("\nEnter non zero ch1, ch1:\n");
		scanf_s("%f%f", &ch1, &ch2);
	}
	abs1 = fabs(ch1);
	abs2 = fabs(ch2);
	printf("+ is: %.2f\n- is: %.2f\n* is: %.2f\n/ is: %.2f\n\n", abs1 + abs2, abs1 - abs2, abs1 * abs2, abs1 / abs2);
	return 0;
}
