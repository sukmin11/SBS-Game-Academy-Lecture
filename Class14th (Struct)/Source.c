#include <stdio.h>
#include <math.h>

struct Unit
{
	char grade;
	int health;
	float attack;
	double experience;
};

struct Vector2
{
	int x;
	int y;
};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ���� 
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct Unit unit;
	// 
	// unit.grade = 'B';
	// unit.health = 100;
	// unit.attack = 32.5f;
	// unit.experience = 1075.75;
	// 
	// printf("unit�� grade �� : %c\n", unit.grade);
	// printf("unit�� health �� : %d\n", unit.health);
	// printf("unit�� attack �� : %f\n", unit.attack);
	// printf("unit�� experience �� : %lf\n", unit.experience);

	// ����ü�� �ִ� �����͸� �ʱ�ȭ�� �� ���ʿ� �ִ� �����ͺ���
	// ����ü�� �ִ� ��� ������ ������ �ʱ�ȭ�� �����մϴ�.

	// struct Unit marine = {'A', 60, 6.5f, 36.5};
	// 
	// printf("marine�� grade �� : %c\n", marine.grade);
	// printf("marine�� health �� : %d\n", marine.health);
	// printf("marine�� attack �� : %f\n", marine.attack);
	// printf("marine�� experience �� : %lf\n", marine.experience);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�

	struct Vector2 character = { 0,0 };

	struct Vector2 enemy = { 2, 3 };

	int x = character.x - enemy.y;
	int y = character.x - enemy.y;

	double distance = sqrt(pow(x, 2) + pow(y, 2));

	if (distance < 5.0)
	{
		printf("���� ������ ���Խ��ϴ�\n");
	}
	else
	{
		printf("���� �������� ������ϴ�\n");
	}

#pragma endregion


	return 0;
}