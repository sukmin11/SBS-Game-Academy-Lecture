#include  <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ��ɹ��Դϴ�.

#pragma region ����������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� 
	// ����ϴ� �������Դϴ�.

	// int x = 0;
	// int y = 0;
	// 
	// // int result = ++x;
	// // 
	// // printf("x ������ �� : %d\n", x);
	// // printf("result ������ �� : %d\n", result);
	// // 
	// // result = --x;
	// // 
	// // printf("x ������ �� : %d\n", x);
	// // printf("result ������ �� : %d\n", result);
	// 
	// int data = y++;
	// 
	// printf("y ������ �� : %d\n", y);
	// printf("data ������ �� : %d\n", data);
	// 
	// data = y--;
	// 
	// printf("y ������ �� : %d\n", y);
	// printf("data ������ �� : %d\n", data);

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ�
	// ������ �����ϰ�, ���� ���� �����ڴ� ������
	// ������ ���� ������ ���� ������ŵ�ϴ�.

#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	// for (int i = 1; i <= 10; i++)
	// {
	// 	printf("Hello World %d\n", i);
	// }

	// �ݺ����� ��� ������ ������ ���¿� �ݴ�� �ʱ����
	// �����ϰ� �Ǹ� ������ ��ġ���� �ʾ� ��� �ݺ�������
	// ����Ǵ� ������ �߻��մϴ�.

#pragma endregion

#pragma region (1) ~ n������ ��
	// int sum = 0; 
	// int n = 10;
	// 
	// for (int i = 1; i <= n; i++)
	// {
	// 	sum += i;
	// }
	// printf("%d\n", sum);
#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־���
	// ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	// int count = 5;
	// 
	// while (count > 0)
	// {
	// 	printf("Game Start\n");
	// 
	// 	count--;
	// }
#pragma endregion

#pragma region do-while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	// int connect = 0;
	// 
	// do
	// {
	// 	printf("Login\n");
	// }
	// while (connect > 5);
#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾
	// �����ϴ� ����Դϴ�.

	// for (int i = 1; i <= 5; i++)
	// {
	// 	if (i % 2 == 0)
	// 	{
	// 		continue;
	// 	}
	// 	printf("%d ", i);
	// }

#pragma endregion

#pragma region (2)�� for��

	// for (int i = 0; i < 3; i++)
	// {
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("��");
	// 	}
	// 
	// 	printf("��");
	// }


#pragma endregion

#pragma region ������
// for (int i = 1; i < 10; i++)
// {
// 	for (int j = 1; j < 10; j++)
// 	{
// 		printf("%d X %d = %d\n", i, j, i * j);
// 	} 
// 
// 	printf("\n");
// }
#pragma endregion




#pragma endregion
}