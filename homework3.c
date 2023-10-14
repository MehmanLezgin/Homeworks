#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void task_2_4()
{
	short n;
	printf("Enter two digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	printf("%u %u", n2, n1);
}

void task_2_5()
{
	short n;
	printf("Enter two digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	printf("%u", n1 + n2);
}

void task_2_6()
{
	short n;
	printf("Enter two digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	printf("%u", n1 * n2);
}

void task_2_7()
{
	short n;
	printf("Enter three digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	short n_swapped = n1 * 10 + n2;
	printf("%u", n_swapped);
}

void task_2_8()
{
	short n;
	printf("Enter three digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	short n3 = n / 100;
	printf("%u %u %u", n3, n2, n1);
}

void task_2_9()
{
	short n;
	printf("Enter three digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	short n3 = n / 100;
	printf("%u", n3 + n2 + n1);
}

void task_2_10()
{
	short n;
	printf("Enter three digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	short n3 = n / 100;
	printf("%u", n3 * n2 * n1);
}

void task_2_11()
{
	short n;
	printf("Enter three digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	short n3 = n / 100;
	short n_swapped = n3 * 10 + n2 * 100 + n1;
	printf("%hu", n_swapped);
}

void task_2_12()
{
	short n;
	printf("Enter three digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	short n3 = n / 100;
	short n_swapped = n3 + n2 * 10 + n1 * 100;
	printf("%hu", n_swapped);
}

void task_2_13()
{
	short n;
	printf("Enter three digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	short n3 = n / 100;
	short n_swapped = n3 * 100 + n2 + n1 * 10;
	printf("%hu", n_swapped);
}

void task_2_14()
{
	int n;
	printf("Enter seconds: ");
	scanf_s("%d", &n);
	int minutes = n / 60;
	printf("minutes = %d\n", minutes);
}

void task_2_15()
{
	int n;
	printf("Enter seconds: ");
	scanf_s("%d", &n);
	int hours = n / 60 / 60;
	int remainder_sec = n % 3600;
	printf("hours = %d\nseconds remainder = %d", hours, remainder_sec);
}

void task_2_16()
{
	short n;
	printf("Enter two digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	printf("%u", n1 * n1 + n2 * n2);
}

void task_2_17()
{
	short n;
	printf("Enter two digit number: ");
	scanf_s("%hu", &n);

	short n1 = n % 10;
	short n2 = n / 10 % 10;
	printf("n1-n2=%u, n2-n1=%d", (int)pow(n1 - n2, 2), (int)pow(n2 - n1, 2));
}

void task_2_18()
{
	int l;
	printf("Enter meters: ");
	scanf_s("%d", &l);
	int km = l / 1000;
	int remainder_meters = l % 1000;
	printf("Kilometers = %d\nmeters remainder = %d", km, remainder_meters);
}

void task_2_19()
{
	int m;
	printf("Enter grams: ");
	scanf_s("%d", &m);
	int kg = m / 1000;
	int remainder_grams = m % 1000;
	printf("kilograms = %d\ngrams remainder = %d", kg, remainder_grams);
}

void task_2_20()
{
	int b;
	printf("Enter KB: ");
	scanf_s("%d", &b);
	int mb = b >> 10;
	int remainder_kb = b - (mb << 10);
	printf("MB = %d\nKB remainder = %d", mb, remainder_kb);
}

void task_2_21()
{
	int l;
	printf("Enter decimeters: ");
	scanf_s("%d", &l);
	int meters = l / 10;
	int remainder_cm = l % 10;
	printf("meters = %d\ncm remainder = %d", meters, remainder_cm);
}

void task_2_22()
{
	int k;
	printf("Enter days: ");
	scanf_s("%d", &k);
	int weeks = k / 7;
	int remainder_days = k % 7;
	printf("weeks = %d\nremainder_days = %d", weeks, remainder_days);
}

void task_2_23()
{
	int k;
	printf("Enter days: ");
	scanf_s("%d", &k);
	int days = k / 24;
	int remainder_hours = k % 24;
	printf("weeks = %d\nremainder_hours = %d", days, remainder_hours);
}


int main()
{
	float (*task_2_s[])() = {
		task_2_4, task_2_5, task_2_6, task_2_7, task_2_8,
		task_2_9, task_2_10, task_2_11, task_2_12, task_2_13,
		task_2_14, task_2_15, task_2_16, task_2_17, task_2_18,
		task_2_19, task_2_20, task_2_21, task_2_22, task_2_23,
	};

	const int funcCount = sizeof(task_2_s) / sizeof(task_2_s[0]);

	for (int i = 0; i < funcCount; i++)
	{
		printf("\n%u)\n", i + 1);
		task_2_s[i]();
		printf("\n");
	}
	return 0;
}