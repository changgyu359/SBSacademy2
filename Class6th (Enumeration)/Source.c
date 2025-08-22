#include<stdio.h>
#include<windows.h>
#define WIDTH 10
#define HEIGHT 10

enum COLOR
{
	BLACK,
	DARKBULE,
	DARKGREEN,
	DARKSKYBLUE,
	DARKRED,
	DARKVIOLET,
	DARKYELLOW,
	GRAY,
	DARKGARY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE
};
char map[WIDTH][HEIGHT] =
{
{'0','1','1','1','1','1','1','1','1','1'},
{'0','0','0','1','0','0','0','0','0','1'},
{'1','1','0','1','0','1','0','1','0','1'},
{'1','0','0','0','0','1','0','1','0','1'},
{'1','0','1','1','1','1','0','1','1','1'},
{'1','0','0','1','0','0','0','0','1','1'},
{'1','1','0','1','0','1','1','0','1','1'},
{'1','0','0','1','0','1','1','0','1','1'},
{'1','0','1','0','0','1','1','0','0','1'},
{'1','1','1','1','1','1','1','1','0','0' }
};

void render()
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			if (map[i][j] == '0')
			{
				printf("  ");
			}
			else if (map[i][j] == '1')
			{
				printf("■");
			}

		}
		printf("\n");
	}

}
int main()
{
	//render();

#pragma region 열거형
	// 서로 관련 있는 상수들을 하나의 집합으로 정의하여 이름으로 사용할 수 있도록 설계된 자료형

	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

	//printf("League Of Legend");


	for (int i = 0; i < 15; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
		printf("League Of Legend\n");
		if (i % 5 == 0 && i != 0)
		{
			system("pause");
		}
	}
#pragma endregion




	return 0;
}