#include <iostream>

#define SIZE 5

using namespace std;

template<typename T>
class LinearQueue
{
private:
	int front;
	int rear;

	T container[SIZE];
public:
	LinearQueue()
	{
		front = 0;
		rear = 0;

		for (int i = 0; i < SIZE; i++)
		{
			container[i] = NULL;
		}
	}

	void push(T data)
	{
		if (rear >= SIZE)
		{
			cout << "Linear Queue Overflow" << endl;
		}
		else
		{
			container[rear++] = data;
		}

	}
	bool Empty()
	{
		if (front == rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void pop()
	{
		if (Empty())
		{
			if (container[rear] != NULL)
			{
				container[rear] = NULL;
			}
			else
			{
				cout << "Linear Queue is Empty" << endl;
			}
		}
		else
		{
			container[front++] = NULL;
		}
	}

	const T Front()
	{
		if (Empty())
		{
			cout << "Linear Queue is Empty" << endl;

			exit(1);
		}
		else
		{
			return container[front];
		}
	}

	const int& size()
	{
		return rear - front;
	}

};

int main()
{
	LinearQueue<int> linearQueue;

	linearQueue.push(10);
	linearQueue.push(20);
	linearQueue.push(30);
	linearQueue.push(40);
	linearQueue.push(50);

	cout << "Linear Queue Size : " << linearQueue.size() << endl;

	while (linearQueue.Empty() == false)
	{
		cout << linearQueue.Front() << " ";

		linearQueue.pop();
	}

	return 0;
}
