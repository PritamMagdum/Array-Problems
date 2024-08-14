// Left rotate an array by k place

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    // ------------------------- Method 1 ----------------------

    /*
    d = d % n;

    // cut
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // shift
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // push back
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
    */

    // ----------------------- Method 2 ----------------------
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cin >> d;
    leftRotate(arr, n, d);

    // to show output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
