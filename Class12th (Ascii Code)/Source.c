#include  <stdio.h>

void Execute(int count)
{
	if (count <= 0)
	{
		return;
	}

	printf("Execute\n");
	Execute(count - 1);
	printf("%d\n", count);
}

int main()
{
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	// Execute(5);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��ϰ� �˴ϴ�.
#pragma endregion

#pragma region ASCII CODE
	// �̱� ���� ǥ�� ��ȸ���� ǥ��ȭ�� ���� ��ȯ��
	// 7 bit ��ȣ ü���Դϴ�.

	int alphabet = 'A';
	
	for (int i = 0; i < 26; i++)
	{
		printf("%c ", alphabet + i);
	}

#pragma endregion

#pragma region ��ҹ��� ��ȯ

	// char content[] = "HELLO";
	// 
	// for (int i = 0; i < sizeof(content); i++)
	// {
	// 	if (content[i] >= 'a' && content[i] <= 'z')
	// 	{
	// 		content[i] = content[i] - 32;
	// 	}
	// 	else if (content[i] >= 'A' && content[i] <= 'Z')
	// 	{
	// 		content[i] = content[i] + 32;
	// 	}
	// }
	// printf("%s", content);

#pragma endregion


	return 0;
}