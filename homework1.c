#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float expx;

float root(float x, float y)
{
	return pow(x, .1 / y);
}

float func1(float x)
{
	return root(x * x + 2.7f * M_PI * cos(fabs(pow(x, .3))) - 2 + expx, 7);
}

float func2(float x)
{
	return fabs(pow(x, 4) - cos(x)) - root(1 + sqrt(pow(x, 6)), 9) + pow(sin(M_PI / (expx + 1)), 3);
}

float func3(float x)
{
	return pow(tan(x), 4) + pow(sin(M_PI / x), 2) - exp(2 * x * x + 3.6f * x - 1);
}

float func4(float x)
{
	return log(fabs(expx - 4)) / log(4) - root((2 * x) / 3.21f + pow(cos(M_PI / 7), 2), 7);
}

float func5(float x)
{
	return root(sqrt(fabs(x)), 3) + fabs(pow(cos(x) / sin(x), 2) + expx / (2 * M_PI) - pow(x, 3));
}

float func6(float x)
{
	return pow(x, 5) + pow(log(3 * x * x + 5) / log(3), 2) + root(pow(M_PI - 6 * x * x, 2), 9);
}

float func7(float x)
{
	return (1 - log(fabs(x - cos(2 * x - M_PI)))) / (6 + pow(x, 4 * x - 1) + root(pow(x, 3), 5));
}

float func8(float x)
{
	return exp(x + M_PI / 3) + root(tan(pow(x, 5) / (x * x + 13.22f)), 3);
}

float func9(float x)
{
	return pow(x, 1 + 3 * M_PI / 4) - 3 * pow(x, 3) - root(pow(x + 1, 4) + log10(x / (x + 1)), 5);
}

float func10(float x)
{
	return root(pow(x, 3) + cos(sqrt(fabs(pow(x, 3)))), 5) + expx / (cos(3 * x + M_PI / 15));
}

float func11(float x)
{
	float z = pow(x - M_PI, 9) / pow(x, 4) + 3.4f;
	return exp(2 * x) + root(cos(z) / sin(z), 5) + pow(sin(6.2f), 2);
}

float func12(float x)
{
	return pow(pow(x + tan(x), 2), 5) - (1 - log10(expx + cos(M_PI / 8))) / 2;
}

float func13(float x)
{
	return log(expx + 27) - sqrt(pow(x, 3) + (root(pow(x, 7), 5) + 14) / (sin(5 * x) + 5.1 * M_PI));
}

float func14(float x)
{
	return log10(fabs(cos(x - 2 * M_PI))) - pow(1 + expx / (sin(x) - 3), 3);
}

float func15(float x)
{
	return sqrt(pow(x, 3) + ((root(pow(x, 4), 3)) - 1) / (sin(x) + M_PI + expx));
}

float func16(float x)
{
	return root((1 + 3 * M_PI) / (1 + x * x), 3) + fabs(pow(atan(pow(x, 3)), 2));
}

float func17(float x)
{
	return pow(tan(fabs(x)), 2) + pow(3, 2 * x * x - expx) + root(x * x, 7) / pow(cos(M_PI * x), 2);
}

float func18(float x)
{
	return pow(x, 4) - root(M_PI - sqrt(fabs(pow(x, 3))), 5) + pow(sin(x / (x * x + 1)), 2);
}

float func19(float x)
{
	return log(expx + 6) - root(pow(x - 4, 2) + 1.47f * sin(sqrt(fabs(M_PI * x))), 3);
}

float func20(float x)
{
	return pow(x, 5) / sin(fabs(x - 7)) + pow(log(x * x + 2.5f), 2) - root(pow(M_PI - 6.1f * x * x, 2), 3);
}

float func21(float x)
{
	float z = x * M_PI / 3;
	return pow(cos(z) / sin(z), 2) - sqrt(fabs(x)) - pow(3.4f, x * x - 10) + log10(x * x + 3);
}

float func22(float x)
{
	return log(fabs(pow(x, 3) - expx)) / log(5) - root(2*x/cos(x+1.23f* M_PI), 3);
}

float func23(float x)
{
	return fabs(cos(M_PI/7)-expx) - root(2+sqrt(pow(x,5)), 7) + log10((pow(x,4)+1)/6);
}

float func24(float x)
{
	return log(x*x+2) - pow(sin(x),2) + root(2-sqrt(fabs(x)), 5) + sin(M_PI/expx+1);
}

float func25(float x)
{
	return log2f(expx)-cos(x/ M_PI)+root(fabs(tan(2*x))/2.6f+x*x+pow(x,3), 3);
}

int main()
{
	float x;				// переменная, куда будем записывать входное число
	printf("Enter x: ");	// выводим сообщение в консоль
	scanf_s("%f", &x);		// записываем число с плавающей точкой (float) в переменную x

	expx = exp(x);


	/*	создаем массив указателей на каждую функцию
	*	для удобного последовательного вызова
	*/

	float (*simple_functions[])(float) = {
		func1, func2, func3, func4, func5,
		func6, func7, func8, func9, func10,
		func11, func12, func13, func14, func15,
		func16, func17, func18, func19, func20,
		func21, func22, func23, func24, func25
	};

	/*	Вычисляем количество функций в массиве.
	*	Так как sizeof(simple_functions) вернет размер
	*	всего массива указателей в байтах, то делим его
	*	на размер указателя (4 для x32, 8 для x64) одной функции
	*/
	const int funcCount = sizeof(simple_functions) / sizeof(simple_functions[0]);

	// итерируемся по массиву, вычисляем и выводим результат в консоль

	for (int i = 0; i < funcCount; i++)
	{
		printf("%d) y = %.4f\n", i + 1, simple_functions[i](x));
	}
}