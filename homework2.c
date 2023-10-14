#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float toDeg(float rad) { return rad * 180 / M_PI; }
float toRad(float deg) { return deg * M_PI / 180; }

void task1()
{
	float a, b;
	printf("Enter sides of triangle:\n");
	printf("Enter a: ");
	scanf_s("%f", &a);
	printf("Enter b: ");
	scanf_s("%f", &b);

	float c = sqrt(a * a + b * b);
	float alpha = toDeg(asin(a / c));
	float beta = toDeg(asin(b / c));
	printf("Hypotenuse = %.4f \nalpha = %.1f \nbeta = %.1f\n", c, alpha, beta);
}

void task2()
{
	float c, alpha;
	printf("Enter hypotenuse: ");
	scanf_s("%f", &c);
	printf("Enter alpha: ");
	scanf_s("%f", &alpha);

	alpha = toRad(alpha);
	float a = c * cos(alpha);
	float b = c * sin(alpha);
	float area = a * b / 2;
	float beta = toDeg(atan(a / b));
	printf("S = %.4f \nbeta = %.1f\n", area, beta);
}

void task3()
{
	float diag;
	printf("Enter the diag of the square: ");
	scanf_s("%f", &diag);

	float area = diag * diag / 2;
	float perimeter = diag * 2 * sqrt(2);
	printf("S = %.2f \nP = %.2f\n", area, perimeter);
}

void task4()
{
	float diameter;
	printf("Enter the diameter of the circle: ");
	scanf_s("%f", &diameter);

	float radius = diameter / 2;
	float len = 2 * M_PI * radius;
	float area = M_PI * radius * radius;
	printf("L = %.2f \nS = %.2f\n", len, area);
}

void task5()
{
	float a, b, c;
	printf("Enter a b c: ");
	scanf_s("%f %f %f", &a, &b, &c);

	float ar_mean = (a + b + c) / 3;
	float ge_mean = pow(a * b * c, .1 / 3);
	printf("Arithmetic mean = %.2f \nGeometric mean = %.2f\n", ar_mean, ge_mean);
}

void task6()
{
	float a, b;
	printf("Enter the legs of the triangle:\n");
	printf("Enter a: ");
	scanf_s("%f", &a);
	printf("Enter b: ");
	scanf_s("%f", &b);

	float hypotenuse = sqrt(a * a + b * b);
	float perimeter = a + b + hypotenuse;
	printf("Hypotenuse = %.2f \nP = %.2f\n", hypotenuse, perimeter);
}

void task7()
{
	float len;
	printf("Enter the len of the circle: ");
	scanf_s("%f", &len);

	float radius = len / M_PI / 2;
	float area = M_PI * radius * radius;
	printf("R = %.2f \nS = %.2f\n", radius, area);
}

void task8()
{
	float a, b;
	printf("Enter a: ");
	scanf_s("%f", &a);
	printf("Enter b: ");
	scanf_s("%f", &b);

	float s = a + b;
	float r = a - b;
	float p = a * b;
	float d = a / b;

	printf("S = %.2f\nR = %.2f\nP = %.2f\nD = %.2f\n", s, r, p, d);
}

void task9()
{
	int a, b;
	printf("Enter a: ");
	scanf_s("%d", &a);
	printf("Enter b: ");
	scanf_s("%d", &b);

	int t = a;
	a = b;
	b = t;

	printf("a = %d\nb = %d\n", a, b);
}

void task10()
{
	float x1, y1, x2, y2;
	printf("Enter x1 y1: ");
	scanf_s("%f %f", &x1, &y1);
	printf("Enter x2 y2: ");
	scanf_s("%f %f", &x2, &y2);

	float len = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("L = %.2f\n", len);
}

void task11()
{
	float a, b;
	printf("Enter the legs of the triangle:\n");
	printf("Enter a: ");
	scanf_s("%f", &a);
	printf("Enter b: ");
	scanf_s("%f", &b);

	float area = a * b / 2;
	float hypotenuse = sqrt(a * a + b * b);
	float perimeter = a + b + hypotenuse;
	printf("S = %.2f \nP = %.2f\n", area, perimeter);
}

void task12()
{
	int a, b, c;
	printf("Enter a: ");
	scanf_s("%d", &a);
	printf("Enter b: ");
	scanf_s("%d", &b);
	printf("Enter c: ");
	scanf_s("%d", &c);

	int t = a;
	a = c;
	c = b;
	b = t;

	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
}

void task13()
{
	float diag1, diag2;
	printf("Enter two diags of the rhombus: ");
	scanf_s("%f %f", &diag1, &diag2);

	float area = diag1 * diag2 / 2;
	float side = sqrt(pow(diag1 / 2, 2) + pow(diag2 / 2, 2));
	float perimeter = 4 * side;
	printf("S = %.2f \nP = %.2f\n", area, perimeter);
}

void task14()
{
	float x;
	printf("Enter x: ");
	scanf_s("%d", &x);

	float y = 4 * pow(x + 1, 3) + 5 * pow(x - 1, 5) + 2;
	float y1 = 12 * pow(x + 1, 2) + 25 * pow(x - 1, 4);
	printf("y = %.2f \ny1 = %.2f\n", y, y1);
}

void task15()
{
	float a, b;
	printf("Enter a: ");
	scanf_s("%f", &a);
	printf("Enter b: ");
	scanf_s("%f", &b);

	a = fabs(a);
	b = fabs(b);

	float s = a + b;
	float r = a - b;
	float p = a * b;
	float d = a / b;

	printf("S = %.2f\nR = %.2f\nP = %.2f\nD = %.2f\n", s, r, p, d);
}

void task16()
{
	float x1, y1, x2, y2;
	printf("Enter x1 y1: ");
	scanf_s("%f %f", &x1, &y1);
	printf("Enter x2 y2: ");
	scanf_s("%f %f", &x2, &y2);

	float a = x2 - x1;
	float b = y2 - y1;

	float area = a * b;
	float perim = (a + b) * 2;
	printf("S = %.2f\nP = %.2f\n", area, perim);
}

void task17()
{
	float a, b;
	printf("Enter a: ");
	scanf_s("%f", &a);
	printf("Enter b: ");
	scanf_s("%f", &b);

	float area = a * b;
	float perim = (a + b) * 2;
	printf("S = %.2f\nP = %.2f\n", area, perim);
}

void task18()
{
	float perim;
	printf("Enter the perimeter of the triangle: ");
	scanf_s("%f", &perim);

	float a = perim / 3;
	float area = sqrt(3) / 4 * a * a;
	printf("S = %.2f\n", area);
}

void task19()
{
	float perim;
	printf("Enter the perimeter of the square: ");
	scanf_s("%f", &perim);

	float a = perim / 4;
	float area = a * a;
	float diag = sqrt(area * 2);
	printf("a = %.2f\nd = %.2f\nS = %.2f\n", a, diag, area);
}

void task20()
{
	float a;
	printf("Enter the side of the square: ");
	scanf_s("%f", &a);

	float perim = a * 4;
	float area = a * a;
	float diag = sqrt(area * 2);
	printf("P = %.2f\nS = %.2f\nd = %.2f\n", perim, area, diag);
}

void task21()
{
	float x1, y1, x2, y2, x3, y3;
	printf("Enter A(x1 y1): ");
	scanf_s("%f %f", &x1, &y1);
	printf("Enter B(x2 y2): ");
	scanf_s("%f %f", &x2, &y2);
	printf("Enter C(x3 y3): ");
	scanf_s("%f %f", &x3, &y3);

	float ab_len = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float bc_len = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));

	printf("|AB| = %.2f\n|BC| = %.2f\n", ab_len, bc_len);
}

void task22()
{
	int a, b, c;
	printf("Enter a: ");
	scanf_s("%d", &a);
	printf("Enter b: ");
	scanf_s("%d", &b);
	printf("Enter c: ");
	scanf_s("%d", &c);

	int t = a;
	a = b;
	b = c;
	c = t;

	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
}

void task23()
{
	float a[5];
	printf("Enter a1 ... a5: ");
	scanf_s("%f %f %f %f %f", a, a + 1, a + 2, a + 3, a + 4);

	float ar_mean = (a[0] + a[1] + a[2] + a[3] + a[4]) / 3;
	float ge_mean = pow(a[0]*a[1]*a[2]*a[3]*a[4], .1 / 5);
	printf("Arithmetic mean = %.2f \nGeometric mean = %.2f\n", ar_mean, ge_mean);
}

void task24()
{
	float x;
	printf("Enter x: ");
	scanf_s("%d", &x);

	float y = .3f/2*pow(x+3,4)-.1f/5*pow(x-1,5);
	float y1 = 0.6f * pow(x + 3, 3) - 0.02f * pow(x - 1, 4);
	printf("y = %.2f \ny1 = %.2f\n", y, y1);
}

void task25()
{
	float x1, y1, z1, x2, y2, z2;
	printf("Enter x1 y1 z1: ");
	scanf_s("%f %f %f", &x1, &y1, &z1);
	printf("Enter x2 y2 z2: ");
	scanf_s("%f %f %f", &x2, &y2, &z2);

	float len = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
	printf("L = %.2f\n", len);
}

int main()
{
	float (*tasks[])() = {
		task1, task2, task3, task4, task5,
		task6, task7, task8, task9, task10,
		task11, task12, task13, task14, task15,
		task16, task17, task18, task19, task20,
		task21, task22, task23, task24, task25
	};

	const int funcCount = sizeof(tasks) / sizeof(tasks[0]);

	for (int i = 0; i < funcCount; i++)
	{
		printf("\n%d)\n", i + 1);
		tasks[i]();
		printf("\n");
	}
	return 0;
}