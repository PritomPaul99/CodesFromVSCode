#include <iostream>

using namespace std;

#define MAX 10

int stack[MAX], top = -1;

bool isempty()
{
    if (top == -1 || top < MAX)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void push(int data)
{
    if (isempty())
    {
        cout << "Stack is full!";
        return;
    }
    else
    {
        top++;
        stack[top] = data;
        cout << "Data " << stack[top] << " inserted...!" << endl
             << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is already empty...!" << endl
             << endl;
        return;
    }
    else
    {
        int frg = stack[top];
        top--;
        cout << "Data popped: " << frg << endl
             << endl;
    }
}
void current_size()
{
    if (top == -1)
    {
        cout << "Stack is empty...!" << endl
             << endl;
        return;
    }
    cout << "Current size: " << top;
    return;
}
void print_stack()
{
    if (top == -1)
    {
        cout << "Stack is empty...!" << endl
             << endl;
    }
    for (size_t i = top; i != -1; i--)
    {
        cout << stack[i] << endl;
    }
}

int main()
{
    int data;
    int ch;

    while (1)
    {
        cout << "1: Push." << endl
             << "2: Pop." << endl
             << "3: Top." << endl
             << "4. Current size." << endl
             << "5: Print stack." << endl
             << "0: Exit program" << endl
             << "Enter a choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter data to push: ";
            cin >> data;
            push(data);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            cout << "Top is: " << stack[top] << endl;
            break;
        }
        case 4:
        {
            current_size();
            break;
        }
        case 5:
        {
            cout << "Printing stack..." << endl;
            print_stack();
            break;
        }
        case 0:
        {
            cout << "Exiting program...!!!" << endl;
            exit(0);
        }
        default:
        {
            cout << "Enter valid choice...!" << endl;
            break;
        }
        }
    }
}