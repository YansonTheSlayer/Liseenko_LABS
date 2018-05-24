#include "QueueBasedOnArray.h"
#include "QueueBasedOnBidirectionalCircularList.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 10;

	QueueBasedOnArray<int> turn1(n);
	QueueBasedOnBidirectionalCircularList<double> turn2(n);


	for (int i = 0; i < 6; i++)
	{
		turn1.Push(i + 4);
		turn2.Push((double)(i + 4)/10);
	}

	cout << turn1 << "\n" << turn2;
	cout << turn1.Pop() << "\n" << turn2.Pop() << "\n";

	for (int i = 0; i < 6; i++)
	{
		turn1.Push(i + 1);
		turn2.Push((double)(i + 1) / 10);
	}

	cout << turn1 << "\n" << turn2;
	_getch();
}