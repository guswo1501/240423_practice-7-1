#include <iostream>

int main()
{
	int input = 2;		// input�� �ʱⰪ�� �����϶�� �ؼ�, 0���� �ϸ� �ٷ� ����Ǵϱ� 1�� ����ϴ�. 0�� �ƴ� �� �ƹ��ų� �൵ ��
	int output = 0;


	std::cout << "����ڰ� �Է��� ���� ���ϱ�\n";

	while (input != 0)
	{
		std::cout << "���ڸ� �Է��ϼ��� (0:exit) = ";
		std::cin >> input;

		output = output + input;
	}

	if (input == 0)
	{
		std::cout << "����ڰ� �Է��� ���� ���� " << output << std::endl;

	}
}