#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0, high = n - 1;
    int indexArray[2 * n];
    int top = -1;

    indexArray[++top] = low;
    indexArray[++top] = high;

    while (top >= 0)
    {
        high = indexArray[top--];
        low = indexArray[top--];

        int pivot = arr[high], i = low - 1;
        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        if (pi - 1 > low)
        {
            indexArray[++top] = low;
            indexArray[++top] = pi - 1;
        }

        if (pi + 1 < high)
        {
            indexArray[++top] = pi + 1;
            indexArray[++top] = high;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
