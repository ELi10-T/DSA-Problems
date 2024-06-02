#include <bits/stdc++.h>
using namespace std;

// [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60]
// sorting from indexes 3 to 8 will give that.
// O(n). there is no binary-search method in gfg.

void soln(int arr[], int n)
{
    int min_idx = 0;
    int max_idx = n - 1;
    int min_num = INT_MAX;
    int max_num = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            min_idx = i;
            break;
        }
    }

    if (min_idx == 0)
    {
        cout << "Array is sorted\n";
        return;
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            max_idx = i;
            break;
        }
    }

    cout << "min_idx : " << min_idx << " max_idx: " << max_idx << "\n";

    for (int i = min_idx; i <= max_idx; i++)
    {
        if (arr[i] < min_num)
        {
            min_num = arr[i];
        }
        if (arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }

    cout << "min_num : " << min_num << " max_num: " << max_num << "\n";

    for (int i = 0; i < min_idx; i++)
    {
        if (arr[i] > min_num)
        {
            min_idx = i;
            break;
        }
    }

    for (int i = n - 1; i > max_idx; i--)
    {
        if (arr[i] < max_num)
        {
            max_idx = i;
            break;
        }
    }

    cout << "Least Point: " << min_idx << " Highest Point: " << max_idx << "\n";
}

int main()
{
    int arr[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    soln(arr, arr_size);
}