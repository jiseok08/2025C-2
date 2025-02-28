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

	void Append(const char* word)
	{
		int resize = size;

		size = size + strlen(word ) + 1;

		char* newpointer = new char[size];

		for (int i = 0; i < resize; i++)
		{
			newpointer[i] = pointer[i];
		}
		
		for (int i = 0; i < strlen(word) + 1; i++)
		{
			newpointer[strlen(pointer) + i] = word[i];
		}

		if (pointer != nullptr)
		{
			delete[] pointer;
		}

		pointer = newpointer;
		
	}

	long long Find(const char* word)
	{
		int count = 0;

		for (int i = 0; i < size; i++)
		{
			
		}
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
	// String string;
	// 
	// string = "Key";
	// 
	// for (int i = 0; i < string.Size(); i++)
	// {
	// 	cout << string[i];
	// }
	// 
	// cout << endl;
	// 
	// string = "apple";
	// 
	// for (int i = 0; i < string.Size(); i++)
	// {
	// 	cout << string[i];
	// }
	// 
	// cout << endl;
	// 
	// string.Append(" Four");
	// string.Append(" x");
	// 
	// for (int i = 0; i < string.Size(); i++)
	// {
	// 	cout << string[i];
	// }
	// cout << endl;

	std::string name;

	name = "AlistarAl";

	cout << name.find("Al");

	return 0;
}
