#include <iostream>

using namespace std;

class String
{
private:
	int size;

	char* pointer;
public:
	String()
	{
		size = 0;
		pointer = nullptr;
	}
	void operator = (const char * word)
	{
		size = strlen(word) + 1;

		if (pointer == nullptr)
		{
			pointer = new char[size];

			for (int i = 0; i < size; i++)
			{
				pointer[i] = word[i];
			}
		}
		else
		{
			char* newpointer = new char[size];

			for (int i = 0; i < size; i++)
			{
				newpointer[i] = word[i];
			}

			delete [ ] pointer;

			pointer = newpointer;
		}
	}
	const int& Size()
	{
		return size - 1;
	}
	const char& operator [ ] (const int& index)
	{
		return pointer[index];
	}
	~String()
	{
		if (pointer != nullptr)
		{
			delete[] pointer;
		}
	}
};

int main()
{
	String string;

	string = "Key";

	for (int i = 0; i < string.Size(); i++)
	{
		cout << string[i];
	}

	cout << endl;

	string = "Apple";

	for (int i = 0; i < string.Size(); i++)
	{
		cout << string[i];
	}

	cout << endl;

	return 0;
}
