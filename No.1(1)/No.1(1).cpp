#include <iostream>

int main()
{
	int a;

	printf("Введите а\n");
	scanf_s("%d", &a);

	while (a < 1000000)
	{
		a = a*a;	//возводим число в квадрат
		a++;		//увеличиваем на 1
	} 

	printf("%d", a);

	return 0;
}

