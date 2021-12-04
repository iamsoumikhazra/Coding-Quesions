// Find the maximum and minimum element in an array
// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x;
    cin >> x;
    int a[x];

    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    int mx=INT_MIN;
    int mn=INT_MAX;

    for (int i = 0; i < x; i++)
    {
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    cout<<mx<<" "<<mn;

    return 0;

}