#include <iostream>

int main()
{
	int input = 2;		// input의 초기값을 설정하라고 해서, 0으로 하면 바로 종료되니까 1로 줬습니다. 0이 아닌 수 아무거나 줘도 됨
	int output = 0;


	std::cout << "사용자가 입력한 숫자 더하기\n";

	while (input != 0)
	{
		std::cout << "숫자를 입력하세요 (0:exit) = ";
		std::cin >> input;

		output = output + input;
	}

	if (input == 0)
	{
		std::cout << "사용자가 입력한 수의 합은 " << output << std::endl;

	}
}