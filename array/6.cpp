
// Write a program to cyclically rotate an array by one.
// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n+1];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    arr[n]=0;

    for (int i = 0; i <=n; i++)
    {
        swap(arr[i],arr[n]);
        if(i==n){
            swap(arr[n],arr[0]);
        }
    }

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    


    return 0;

}