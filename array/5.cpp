// Move all negative numbers to beginning and positive to end with constant extra space
//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    
    int ptr=0;

    for (int i = 0; i < x; i++)
    {
        if (arr[i] < 0)
        {
            if (i != ptr)
                swap(arr[i], arr[ptr]);
            ptr++;
        }
        
    }
    for (int i = 0; i < x; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
    return 0;
}