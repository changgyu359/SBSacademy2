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
	

	

	while (1)
	{
		char x = _getch();
		switch (x)
		{
		case UP: printf("UP\n");
			break;
		case LEFT: printf("LEFT\n");
			break;
		case RIGHT: printf("RIGHT\n");
			break;
		case DOWN: printf("DOWN\n");
			break;
		}
	}

	

	return 0;
}