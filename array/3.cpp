// Find the "Kth" max and min element of an array 
// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x,k;
    cin>>x>>k;
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+x);
    
    cout<<arr[k-1];
    

    return 0;

}