#include<stdio.h>
#include<Windows.h>
#define SIZE 10


int main()
{
#pragma region GetAsyncKeyState
	// Windows API에서 제공하는 입력 처리 함수로,
	// 지정된 키의 상태를 비동기적으로 확인할 때 사용되는 함수.

	// Key State
	// 0x0000 : 이전에 누른 적이 없고, 호출 시점에도 눌려있지 않은 상태
	// 0x0001 : 이전에 누른 적이 있고, 호출 시점에는 눌려있지 않은 상태
	// 0x8000 : 이전에 누른 적이 없고, 호출 시점에는 눌려있는 상태
	// 0x8001 : 이전에 누른 적이 있고, 호출 시점에도 눌려있는 상태



	const char* chat[SIZE] =
	{
		"흠, 손님이군.",
		"실례합니다.",
		"무슨일로 오셨나요?",
		"사건을 하나 의뢰하고 싶은데요.",
		"어떤 의뢰인가요? 사람찾기? 조사? 아니면...",
		"이 사람을 찾아주세요.",
		"이 사람은... 최근에 뉴스에 나왔던 그 사람이군요.",
		"...그리고 제 남편입니다.",
		"이런, 실례했습니다.",
		"괜찮습니다. 저도 잘 모르겠어서 여기로 온 거니까요.",
	};



	int x = 0;

	while (x < SIZE)
		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{

			if (x % 2 == 1)
			{
				printf("의뢰인: %s\n", chat[x]);
			}
			else
			{
				printf("탐정: %s\n", chat[x]);
			}
			x++;
		}

	printf("대화가 종료되었습니다.\n");

#pragma endregion



	return 0;
}