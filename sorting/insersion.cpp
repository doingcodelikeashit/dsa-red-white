#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7, 8, 3, 1, 2};
    for (int i = 0; i < 5; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && current < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    cout << "Sorted array :: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr[i];
    }
}