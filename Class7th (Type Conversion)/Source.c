#include  <stdio.h>

void main()
{
#pragma region �ڷ��� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� ��������
	// ������ �̷���� �� ������ �����ߴ� �ڷ�����
	// �ٸ� �ڷ������� ��ȯ�ϴ� �����Դϴ�.

#pragma region �Ϲ��� ����ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ�����
	// ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� �����Դϴ�.

	// int integer = 10;
	// float decimal = 6.5f;
	// 
	// float result = decimal + integer;
	// 
	// // printf("result ������ �� : %f\n", result);
	// 
	// // ǥ�� ������ ���� �����Ϳ� ǥ�� ������ ū �����͸�
	// // �����ϰ� �Ǹ� �Ϲ������� ������ �ս��� �߻��մϴ�.
	// 
	// integer = decimal;
	//  
	// printf("integer ������ �� : %d\n", integer);

#pragma endregion

#pragma region ����� ����ȯ
	// ������ �̷������ ���� ����ڰ� ���� �ڷ�����
	// ��ȯ�ϴ� �����Դϴ�.

	// int health = 100;
	// int damage = 3;
	// 
	// float value = (float)health / damage;
	// 
	// printf("value ������ �� : %f\n", value);

	// ������ �������� ������ �����ϰ� �Ǹ� ������
	// ������� ���� �� �ֽ��ϴ�.
#pragma endregion



#pragma endregion

#pragma region ���� �� ���
	// �� �����ڸ� ����� ��, ������ �ּ����� �򰡷�
	// ������ �����ϴ� ���� ����Դϴ�.

	// int x = 0;
	// int y = 0;
	// 
	// if (x != 0 && ++x)
	// {
	// 	printf("AND ������\n");
	// }
	// 
	// if (y != 0 || ++y)
	// {
	// 	printf("OR ������\n");
	// }
	// 
	// printf("x ������ �� : %d\n", x);
	// printf("y ������ �� : %d\n", y);

#pragma endregion

#pragma region ��ȣ ���� �ڷ���

	// unsigned int data = 0;
	// 
	// data = 4294967295;
	// // [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	// printf("data ������ �� : %d\n", data);
	// 
	// data = -1;
	// // [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	// printf("data ������ �� : %u\n", data);

#pragma endregion

#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	// int a = 10;
	// 
	// printf("a�� �ּ� �� : %p\n", &a);

	// �������� �ּ� ���� �ش� �����Ͱ� �����
	// �޸��� ���� �ּҸ� �ǹ��ϸ�, �޸� ������
	// 1 byte�� ũ��� ���������ϴ�.
#pragma endregion

#pragma region scanf�Լ�
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ���
	// ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.

	// int positionX = 0;
	// 
	// printf("positionX�� �� �Է� : ");
	// scanf_s("%d", &positionX);
	// 
	// // ǥ�� �Է� �Լ��� �Է��� ������ ������ ����
	// // �۾����� �Ѿ �� �����ϴ�.
	// 
	// printf("positionX�� �� : %d\n", positionX);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ�
	// �����͸� �����Ͽ��ٰ� �Է��ϴ� ���� ���� ����
	// ������ ���α׷��� �����մϴ�.
#pragma endregion

}