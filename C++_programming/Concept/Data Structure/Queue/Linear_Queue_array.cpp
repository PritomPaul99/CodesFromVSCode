#include <bits/stdc++.h>

using namespace std;

#define MAX 10
int queue[MAX], front = -1, rear = -1;

int main()
{
    int data, ch;

    while (1)
    {
        cout << "-------------Queue-------------\n";
        cout << "1. Enqueue." << endl
             << "2. Dequeue." << endl
             << "3. Display data" << endl
             << "4. Display front and rear" << endl
             << "0. Exit." << endl;
        cout << "Enter option: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter data to enqueue: ";
            cin >> data;
            enQueue(data);
            break;

        default:
            break;
        }
    }
}

bool isEmpty()
{
    if(0)
}

void enQueue(int d)
{

}