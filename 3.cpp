#include <iostream>
using namespace std;

void push(int &top, int arr[], int size, int pushval)
{
    if (top == size - 1)
    {
        cout << "Stack is full" << endl;
        return;
    }
    top++;
    arr[top] = pushval;
    cout << "Stack: ";
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void pop(int &top, int arr[])
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Popped value: " << arr[top] << endl;
    top--;
    cout << "Stack: ";
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void peek(int top, int arr[])
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top value: " << arr[top] << endl;
}

void isEmpty(int top)
{
    if (top == -1)
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }
}

void isFull(int top, int size)
{
    if (top == size - 1)
    {
        cout << "The stack is full" << endl;
    }
    else
    {
        cout << "The stack is not full" << endl;
    }
}

void stacksize(int top)
{
    cout << "Stack size: " << (top + 1) << endl;
}

int main()
{
    int user, size;

    cout << "Enter the size of stack: ";
    cin >> size;

    int top = -1;
    int *arr = new int[size];

    do
    {
        cout << "press 1: Push" << endl;
        cout << "press 2: Pop" << endl;
        cout << "press 3: Peek" << endl;
        cout << "press 4: isEmpty" << endl;
        cout << "press 5: isFull" << endl;
        cout << "press 6: size" << endl;
        cout << "press 0: Exit" << endl;
        cout << "Enter the above option = ";
        cin >> user;

        switch (user)
        {
        case 1:
        {
            int pushval;
            cout << "Insert the push value = ";
            cin >> pushval;
            push(top, arr, size, pushval);
            cout << "---------------------------------" << endl;
            break;
        }
        case 2:
            pop(top, arr);
            cout << "---------------------------------" << endl;
            break;
        case 3:
            peek(top, arr);
            cout << "---------------------------------" << endl;
            break;
        case 4:
            isEmpty(top);
            cout << "---------------------------------" << endl;
            break;
        case 5:
            isFull(top, size);
            cout << "---------------------------------" << endl;
            break;
        case 6:
            stacksize(top);
            cout << "---------------------------------" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    } while (user != 0);

    delete[] arr;
    return 0;
}