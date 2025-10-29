#include <locale.h>
#include <stdio.h>

int main()
{
	int repeatF, side;
	char symbol;

	setlocale(LC_ALL, "RUS");
	repeatF = 0;

	do
	{
		repeatF = 0;
		printf("Введите стору квадрата и символ через пробел: ");
		scanf("%d %c", &side, &symbol);

		for (int i = 1; i <= side; i++)
		{
			printf("\n");
			for (int j = 1; j <= side; j++)
				printf("%c",symbol);
		}
		printf("\nЖелаете повторить 0 - нет, иначе - да: ");
		scanf("%d", &repeatF);
	}
	while (repeatF);
	puts("");
	system("pause");
}