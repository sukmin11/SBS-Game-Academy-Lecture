#include <stdio.h>
#include <stdarg.h>

void print(int count, ...)
{
	// va_list  : ���� �μ��� ����� �����ϴ� ������ �����Դϴ�.
	va_list list;

	// va_start : ���� �μ��� ���� �ּҸ� ��ȯ�ϴ� �Լ��Դϴ�.
	va_start(list, count);

	// va_arg   : ���� �μ��� �����Ϳ��� Ư���� �ڷ����� ũ�⸸ŭ ���� ������ ��ũ���Դϴ�.
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", va_arg(list, int));
	}

	// va_end   : ���� �μ��� ó���� ������ �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	va_end(list);
}

int main()
{
#pragma region ���� ���� �Ű� ����

	// print(3, 10, 20, 30);

	// print(5, 1, 2, 3, 4, 5);

#pragma endregion

#pragma region Star Wars

	// int star = 0;
	// scanf_s("%d", &star);
	// 
	// for (int i = 0; i < star; i++)
	// {
	// 	for (int j = 0; j <= i; j++)
	// 	{
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }

#pragma endregion

#pragma region ���� ������

	// int** dptr = NULL;
	// 
	// int* ptr = NULL;
	// 
	// int a = 10;
	// 
	// dptr = &ptr;
	// ptr = &a;
	// 
	// printf("**dptr�� �� : %d\n", **dptr);
	// printf("*dptr�� �� : %p\n", *dptr);

#pragma endregion

#pragma region ������ �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

	// int array2D[][3] =
	// {
	// 	{10,20,30},
	// 	{40,50,60},
	// 	{70,80,90},
	// };
	// 
	// // 2���� �迭 ���� �������� �޸� ������ ���·� ����Ǹ�,
	// // 2���� �迭�� ũ�⸦ ������ �� �迭�� ���� ũ�⸸ ������ �� �ֽ��ϴ�.
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("%d ", array2D[i][j]);
	// 	}
	// 
	// 	printf("\n");
	// }

	// 2���� �迭�� ��� ���� ���еǸ�, �տ� �ִ� �迭 ����
	// �ǹ��ϰ�, �ڿ� �ִ� �迭�� ���� �ǹ��մϴ�.
#pragma endregion



	return 0;
}