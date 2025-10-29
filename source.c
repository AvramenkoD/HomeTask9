#include <locale.h>
#include <stdio.h>

int main()
{
	int repeatF, side;

	setlocale(LC_ALL, "RUS");

	do
	{
		printf("Введите стору квадрата: ");
		scanf("%d", &side);

		for (int i = 1; i <= side; i++)
		{
			for (int j = 1; j <= side; j++)
				printf("*");
			printf("\n");
		}
		printf("\nЖелаете повторить 0 - нет, иначе - да: ");
		scanf("%d", &repeatF);
	}
	while (repeatF);
	system("pause");
}