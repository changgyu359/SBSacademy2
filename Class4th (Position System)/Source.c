#include<stdio.h>
#include<Windows.h>
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void move(int x, int y)
{
	// x와 y축을 설정하는 구조체.
	COORD position = { x,y };

	// 콘솔 커서의 좌표를 설정하는 함수.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (position));
}


// update statement
// while(1) {}
// 매 프레임마다 묻는 무한루프.

int main()
{
	// 72 up
	// 75 Left
	// 77 Right
	// 80 Down

	int  x = 0;
	int  y = 0;
	move(x, y);
	printf("★");


	while (1)
	{
		if (_kbhit())
			move(20, 20);
		printf("＠<-포탈");
		char dot = _getch();
		if (dot == -32)
		{
			dot = _getch();
		}
		switch (dot)
		{
			//case -32:
			//	break; 그냥 내가 했던 방식
		case UP: y -= 1;
			if (y < 0)
			{
				y = 0;
			}
			break;
		case LEFT: x -= 2;
			if (x < 0)
			{
				x = 0;
			}
			break;
		case RIGHT: x += 2;
			break;
		case DOWN: y += 1;
			break;
		default: printf("EXCEPTION\n");
			break;
		}
		system("cls");
		if (x == 20 & y == 20)
		{
			x = 0;
			y = 0;
		}
		move(x, y);
		printf("★");
	}

	// w,a,s,d->알파벳은 이미 다 값이 정해져있다 근데 화살표들은?
	// 위,아래,왼쪽,오른쪽은 두번의 입력으로 처리된다. 처음은 0or-32가 반환, 2번째에서 실제 키를 받음
	// 처음에 이상값을 줌으로서 입력한 키가 특수한 값이라는걸 알려줌


	return 0;
}