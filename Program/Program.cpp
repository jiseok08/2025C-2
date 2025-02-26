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
	void resize(int newSize)
	{
		capacity = newSize; // 1. capacity 값 저장

		T * newContainer = new T[capacity]; // 2. 포인터 변수 생성

		for (int i = 0; i < capacity; i++)
		{
			newContainer[i] = NULL; // 3. 메모리 공간 초기화
		}
		for (int i = 0; i < size; i++)
		{
			newContainer[i] = container[i]; // 4. 기존 배열을 복사
		}

		if (container != nullptr)
		{
			delete[] container; // 5. 기존 배열 메모리 해제
		}

		container = newContainer; // 6. 배열 주소 변경
	}
	void push_back(T data)
	{
		if (capacity <= 0)
		{
			resize(1);
		}
		else if (size >= capacity)
		{
			resize(capacity * 2);
		}

		container[size++] = data;
	}
	void pop_back()
	{
		if (size <= 0)
		{
			cout << "Vector is empty" << endl;
		}
		else
		{
			container[--size] = 0;
		}
	}
	const int &Size()
	{
		return size;	
	}
	const T& operator [] (const int& index)
	{
		return container[index];
	}
	~Vector()
	{
		if (container != nullptr)
		{
			delete[] container;
		}
	}
};

int main()
{
	Vector<int> vector;

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(50);

	vector.pop_back();

	for (int i = 0; i < vector.Size(); i++)
	{
		cout << vector[i] << " ";
	}

	return 0;
}
