#include <iostream>
#include <cstdlib>
using namespace std;

int lcm(int a, int b)
{
	int max,min;
	if ( a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	
	for (size_t i{1} ; i <= min ; i++)
		{
			int temp = i * max;
			if (temp%min == 0)
			{
				return temp;
			}
		}
}


int main()
{
	int result = lcm(12,20);
	cout << result;
	
}