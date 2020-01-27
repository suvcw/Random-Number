#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int lowNum{ 1 };
	int highNum{ 100 };
	int randomNumberHolder{ 0 };
	int count{ 1 };

	do {
		randomNumberHolder = rand() % highNum + lowNum;

		cout << randomNumberHolder << endl;

		count++;

	} while (count < 7);
}
