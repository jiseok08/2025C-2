#include <iostream>

#define SIZE 4

using namespace std;

template<typename T>
class CircleQueue
{
private:
	int front;
	int rear;

	T container[SIZE];
public:
	CircleQueue()
	{
		front = -1;
		rear = -1;

		for (int i = 0; i < SIZE; i++)
		{
			container[i] = NULL;
		}
	}

};

int main()
{

	return 0;
}
