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

	// 열거형에 중간에 있는값을 바꾸게 되면 그다음에 있는 값은
	// 중간에 바꾼 값에서부터 + 1이 더해서 계산합니다.
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
	// 이미 정해져 있는 예약어를 사용자가 원하는
	// 이름으로 새롭게 생성하는 것입니다.

	// unsigned int x = 10;
	// UINT y = 20;
	// 
	// Vector2 vector2;
	// 
	// vector2.x = 10;
	// vector2.y = 20;
	// 
	// printf("x 변수의 값 : %u\n", x);
	// printf("y 변수의 값 : %u\n", y);
#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.

	// int* ptr = (int *)malloc(sizeof(int));
	// 
	// *ptr = 10;
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// free(ptr);
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// ptr = NULL;
	// 
	// if (ptr == NULL)
	// {
	// 	int* ptr = (int*)malloc(sizeof(int));
	// }

#pragma endregion

#pragma region 열거형
	// 이름이 지정된 상수 집합을 나타내는 값 형식입니다.

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
		case Q:if (mana >= 10)
		{
			mana -= 10;
			printf("Tumble\n");
		}
			  else
		{
			printf("마나가 부족합니다.\n");
		}
			  break;
		case W:if (mana >= 10)
		{
			mana -= 10;
			printf("Silver Bolts\n");
		}
			  else
		{
			printf("마나가 부족합니다.\n");
		}
			  break;
		case E:if (mana >= 20)
		{
			mana -= 20;
			printf("Condemn\n");
		}
			  else
		{
			printf("마나가 부족합니다.\n");
		}
			  break;
		case R:if (mana >= 30)
		{
			mana -= 30;
			printf("Final Hour\n");
		}
			  else
		{
			printf("마나가 부족합니다.\n");
		}
			  break;
		default: printf("Exception\n");
			break;
		}
	}
#pragma endregion

	return 0;
}