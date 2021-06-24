
#include<iostream>

int main(void)
{
	long long outnum = 0, num;
	for (int i = 100; i <= 200; i++)
	{
		num = 1;
		for (int j = 1; j <= i; j++)
		{
			num *= j;
		}
		//System.out.println(num);
		outnum += num;
	}
	std::cout << outnum;
	return 0;
}