#include <iostream>
#include <iomanip>

using namespace std;

void create(int* arr, int SIZE, int i, int MIN, int MAX)
{
    if (i < SIZE)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
        create(arr, SIZE, i + 1, MIN, MAX);
    }
}

void print(int* arr, int SIZE, int i)
{
    if (i < SIZE)
    {
        cout << arr[i] << " ";
        print(arr, SIZE, i + 1);
    }
}

int sum(int* arr, int SIZE, int i, int result)
{
    if (i < SIZE)
    {
        if (arr[i] > 0 && arr[i] % 4 != 0)
            result += arr[i];
        return sum(arr, SIZE, i + 1, result);
    }
    return result;
}

int count(int* arr, int SIZE, int i, int result)
{
    if (i < SIZE)
    {
        if (arr[i] > 0 && arr[i] % 4 != 0)
            result++;
        return count(arr, SIZE, i + 1, result);
    }
    return result;
}

void updateArray(int* arr, int SIZE, int i)
{
    if (i < SIZE)
    {
        if (arr[i] < 0)
            arr[i] = 0;
        cout << arr[i] << " ";
        updateArray(arr, SIZE, i + 1);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    const int SIZE = 23;
    int arr[SIZE];
    create(arr, SIZE, 0, -19, 25);
    print(arr, SIZE, 0);
    cout << endl;
    cout << "sum = " << sum(arr, SIZE, 0, 0) << endl;
    cout << "count = " << count(arr, SIZE, 0, 0) << endl;
    updateArray(arr, SIZE, 0);
    return 0;
}
