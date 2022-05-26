#include <iostream>
using namespace std;
#define MAX 100
int queue[MAX], front = -1, rear = -1;
void enqueue(int vertext);
void isEmpty();
void dequeue();

int main()
{
	int n, choice, ele;
	cout << "Enter the size of the queue : ";
	cin >> n;
	do
	{
		cout << "Choose any operation in queue (1-3): " << endl;
		cout << "1. Enqueue \t 2. Dequeue \t 3. Empty Or Not \t 4. Display" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the elements : ";
			for (int i = 0; i < n; i++)
			{
				cin >> ele;
				enqueue(ele);
			}
			break;
		case 2:
			dequeue();
			break;
		case 3:
			isEmpty();
			break;
		case 4:
			for (int i = 0; i < n; i++)
			{
				cout << queue[i];
			}
			break;
		default:
			break;
		}
	} while (choice != 0);
	return 0;
}

void isEmpty()
{
	if (front == -1 || front > rear)
	{
		cout << "The queue is Empty";
	}
	else
	{
		cout << "The queue is not Empty";
	}
}

void enqueue(int vertex)
{
	if (rear == MAX)
	{
		cout << "The queue is full";
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}
		rear = rear + 1;
		queue[rear] = vertex;
	}
}
void dequeue()
{
	int delete_item;
	if (front == -1 || front > rear)
	{
		cout << "The queue is empty";
		exit(1);
	}
	else
	{
		delete_item = queue[front];
		front += 1;
		cout << delete_item << " is deleted";
	}
}