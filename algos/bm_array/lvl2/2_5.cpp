//quicksort
#include <iostream>
using namespace std;

class Solution
{
public:
    int partition(int arr[], int low1, int high)
    {
        int index = low1;
        int low = low1;
        int pivot = arr[high];
        while (high > low)
        {
            if (arr[low] <= pivot)
            {
                swap(arr[low], arr[index]);
                index++;
                low++;
            }
            if (arr[low] > pivot)
            {
                low++;
            }
        }
        arr[high] = arr[index];
        arr[index] = pivot;
        return index;
    }
    void quickSort(int arr[], int low, int high)
    {
        int mid;
        if (high > low)
        {
            mid = partition(arr, low, high);
            quickSort(arr, low, mid - 1);
            quickSort(arr, mid + 1, high);
        }
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    ob.quickSort(arr, 0, n - 1);
    for (const auto &x : arr)
    {
        cout << x << " ";
    }
    return 0;
}