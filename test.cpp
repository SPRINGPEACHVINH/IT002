#include <iostream>
using namespace std;
void insertion(int arr[], int n)
{
    int i, j, key;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            int temp = arr[j];
            arr[j + 1] = arr[j];
            j--;
        }
    }
    arr[j + 1] = key;
}
int main()
{
    int arr[4] = {2, 4, 1, 5};
    insertion(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " " << endl;
    }
}