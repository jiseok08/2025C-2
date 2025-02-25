#include <iostream>

#define SIZE 4

using namespace std;

template<typename T>
class Vector
{
private:
	int size;
	T capacity;

	T* container;
public:
	Vector()
	{
		size = 0;
		capacity = 0;
		container = nullptr;
	}
	void push_back()
	{

	}
	void resize(int newSize)
	{
		Vector* newContainer = capacity;

		size = newSize;

		container = NULL;

		delete container;
	}
};

int main()
{

	return 0;
}
