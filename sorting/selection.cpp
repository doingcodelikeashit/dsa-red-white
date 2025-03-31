#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 9, 3, 7, 1};
    for (int i = 0; i < 4; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
            int temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }
    }
    cout << "Sorted array :: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr[i];
    }
}