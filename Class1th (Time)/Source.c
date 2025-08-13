#include<stdio.h>
#include<stdlib.h>
#include<time.h>




void shuffle(int list[], int size)
{
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temp = list[seed];
		list[seed] = list[i];
		list[i] = temp;
	}

}

void heartprint(int num)
{
	if (num == 0)
	{
		printf("♡");
	}

	for (num; num > 0; num--)
	{
		printf("♥");

	}
	printf("\n");
}

int main()
{
#pragma region rand Function
	// 0에서 32767 사이의 난수 값을 반환하는 함수.

	// UTC 기준으로 1970년 1월 1일 0시 0분 0초 부터 경과된 시간을 초(sec)로 반환하는 함수.

	//srand(time(NULL));


	//printf("난수 x의 값:%d\n", rand() % 10+1);


#pragma endregion

#pragma region Shuffle Function

	//int array[] = {1,2,3,4,5,6,7,8,9,10};

	//int size = sizeof(array) / sizeof(array[0]);

	//shuffle(array, size);

	//for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	//{
	//	printf("array[%d]의 값:%d\n", i, array[i]);
	//}


#pragma endregion

#pragma region Game

	srand(time(NULL));

	int goal = rand() % 50 + 1;
	int answer = 0;
	int life = 5;


	printf("정답:%d.\n", goal);
	printf("업다운 게임을 시작합니다. 숫자를 입력해주세요.\n");

	while (life > 0)
	{
		printf("목숨:");
		heartprint(life);
		scanf_s("%d", &answer);

		if (goal > answer)
		{
			life--;
			printf("업,");

		}
		else if (goal < answer)
		{
			life--;
			printf("다운,");
		}
		else if (goal == answer)
		{
			break;
		}

	}
	printf("\n");

	if (life <= 0)
	{
		printf("목숨을 모두 잃었습니다. 게임 오버.\n");
		printf("정답:%d\n", goal);
	}
	else
	{
		printf("정답입니다! 승리!\n");
	}



#pragma endregion


	return 0;
}