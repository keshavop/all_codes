#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int low=0,high=n-1;
    while (low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    printArray(arr,n);
    return 0;
}