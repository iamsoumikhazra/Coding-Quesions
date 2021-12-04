// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x;
    cin>>x;
    int a[x];

    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    
    int zeros=0;
    int ones=0;
    int twos=0;

    for (int i = 0; i < x; i++)
    {
        if(a[i]==0){
            zeros++;
        }
        else if(a[i]==1){
            ones++;
        }
        else if(a[i]==2){
            twos++;
        }
        else{
            continue;
        }
    }

    
   for (int i = 0; i < x; i++)
   {
       if(i<zeros){
           cout<<0<<" ";
       }
       else if(i>=zeros && i<zeros+ones){
           cout<<1<<" ";
       }
       else if(i>=zeros+ones && i<=zeros+ones+twos){
           cout<<2<<" ";
       }

   }
   
    return 0;

}