#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

typedef struct Vector2
{
	int x;
	int y;
}Vector2;

enum State
{
	WALK,
	ATTACK,
	DIE,

	// �������� �߰��� �ִ°��� �ٲٰ� �Ǹ� �״����� �ִ� ����
	// �߰��� �ٲ� ���������� + 1�� ���ؼ� ����մϴ�.
};

enum Key
{
	Q = 1,
	W,
	E,
	R,
};

int main()
{
#pragma region typedef
	// �̹� ������ �ִ� ���� ����ڰ� ���ϴ�
	// �̸����� ���Ӱ� �����ϴ� ���Դϴ�.

	// unsigned int x = 10;
	// UINT y = 20;
	// 
	// Vector2 vector2;
	// 
	// vector2.x = 10;
	// vector2.y = 20;
	// 
	// printf("x ������ �� : %u\n", x);
	// printf("y ������ �� : %u\n", y);
#pragma endregion

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	// int* ptr = (int *)malloc(sizeof(int));
	// 
	// *ptr = 10;
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	// 
	// free(ptr);
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	// 
	// ptr = NULL;
	// 
	// if (ptr == NULL)
	// {
	// 	int* ptr = (int*)malloc(sizeof(int));
	// }

#pragma endregion

#pragma region ������
	// �̸��� ������ ��� ������ ��Ÿ���� �� �����Դϴ�.

	// enum State state = WALK;
	// 
	// switch (state)
	// {
	// case WALK: printf("Walk\n");
	// 	break;
	// case ATTACK: printf("Attack\n");
	// 	break;
	// case DIE: printf("Die\n");
	// 	break;
	// default:
	// 	break;
	// }
#pragma endregion

#pragma region Skill System

	int mana = 100;

	enum Key key = Q;
	
	while (mana > 0)
	{
		scanf_s("%d", &key);
		switch (key)
		{
		case Q:mana -= 10;
			printf("Tumble\n");
			break;
		case W:mana -= 10;
			printf("Silver Bolts\n");
			break;
		case E:mana -= 20;
			printf("Condemn\n");
			break;
		case R:mana -= 30;
			printf("Final Hour\n");
			break;
		default: printf("Exception\n");
			break;
		}
	}
#pragma endregion



	return 0;
}