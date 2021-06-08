//PAPER 3 QUESTION 2
//PROGRAM FOR ARRAY ROTATION
#include <bits/stdc++.h>
using namespace std;
 
void RotateLeftbyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}
 
void RotateLeft(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        RotateLeftbyOne(arr, n);
}
 
void GetArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Original array is ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Rotated array is ";
    RotateLeft(arr, 2, n);
    GetArray(arr, n);
 
    return 0;
}
