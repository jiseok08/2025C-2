#include <iostream>
#include <queue>

#define SIZE 8

using namespace std;

template<typename T>
class PriorityQueue
{
private:
    int index;
    T container[SIZE];
public:
    PriorityQueue()
    {
        index = 0;

        for (int i = 0; i < SIZE; i++)
        {
            container[i] = NULL;
        }
    }


};

int main()
{
    priority_queue<int> priorityQueue;

    priorityQueue.push(30);
    priorityQueue.push(2);
    priorityQueue.push(77);
    priorityQueue.push(15);

    while (priorityQueue.empty() == false)
    {
        cout << priorityQueue.top() << " ";

        priorityQueue.pop();
    }

    return 0;
}