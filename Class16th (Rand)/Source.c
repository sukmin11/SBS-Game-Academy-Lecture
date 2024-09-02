#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Add(int x, int y)
{
	return x + y;
}

int Substract(int x, int y)
{
	return x - y;
}

int Multiply(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

int Calculator(int x, int y, int(*fptr)(int, int))
{
	return fptr(x, y);
}

int main()
{
#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ�
	// �����Դϴ�.

	// int (*fptr)(int, int);
	// 
	// fptr = Add;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10,20));
	// 
	// fptr = Substract;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10, 20));

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ����
	// ��ġ�ؾ� �ϸ�, �Լ� �����͸� ����Ͽ� ��������
	// �޸𸮸� �Ҵ��� �� �ֽ��ϴ�.

	// printf("Calculator�� �� : %d\n", Calculator(5,5,Multiply));

	// �Լ��� ȣ���� ������ ������ ����������, �Լ� �����ͷ�
	// �Լ��� ȣ���ϰ� �Ǹ� ���α׷��� ����Ǵ� ������ �Լ���
	// �̸��� �ü���� �����Ͽ� �Լ��� ȣ���� �� �ֽ��ϴ�.

#pragma endregion

#pragma region rand �Լ�
	// 0 ~ 32767 ������ ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.

	// UTC �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����
	// �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.
	// srand(time(NULL));
	// 
	// int random = rand() % 10 + 1;
	// 
	// printf("random ������ �� : %d\n", random);

#pragma endregion

#pragma region UP - DOWN ����
	srand(time(NULL));

	int computer = rand() % 50 + 1;

	int answer = 0;

	int life = 5;

	while (life != 0)
	{
		printf("Life : %d\n", life);
		printf("Computer�� ������ �ִ� �� : ");
		scanf_s("%d", &answer);

		printf("\n");

		if (answer == computer)
		{
			printf("��ǻ�Ͱ� ������ �ִ� ���� ���߾����ϴ�.\n");
			break;
		}
		else if (answer > computer)
		{
			life--;
			printf("Computer�� ������ �ִ� ������ Ů�ϴ�.\n");
		}
		else if (answer < computer)
		{
			life--;
			printf("Computer�� ������ �ִ� ������ �۽��ϴ�.\n");
		}

		printf("\n");
	}

	if (life == 0)
	{
		printf("Defeat\n");
	}
	else
	{
		printf("Victory\n");
	}

#pragma endregion



	return 0;
}