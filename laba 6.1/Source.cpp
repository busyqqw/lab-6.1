#include <iostream>
#include <iomanip>

using namespace std;

void create(int* arr, int SIZE)
{
    int MIN = -19;
    int MAX = 25;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void print(int* arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}

int sum(int* arr, int SIZE)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0 && arr[i] % 4 != 0)
            sum += arr[i];
    }
    return sum;
}

int count(int* arr, int SIZE)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0 && arr[i] % 4 != 0)
            count++;
    }
    return count;
}

void updateArray(int* arr, int SIZE)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
            cout << arr[i] << " ";
        }
        else {
            cout << arr[i] << " ";
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    const int SIZE = 23;
    int arr[SIZE];
    create(arr, SIZE);
    print(arr, SIZE);
    cout << endl;
    cout << "sum = " << sum(arr, SIZE) << endl;
    cout << "count = " << count(arr, SIZE) << endl;
    updateArray(arr, SIZE);
    return 0;
}