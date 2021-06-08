//PAPER 3 QUESTION 1 PART A
//Union of two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 
void getunion(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) 
       cout << arr1[i++] << " "; 
      
    else if (arr2[j] < arr1[i]) 
       cout << arr2[j++] << " "; 
      
    else
    { 
       cout << arr2[j++] << " "; 
       i++; 
    } 
  } 
  while(i < m) 
     cout << arr1[i++] << " "; 
  
  while(j < n) 
    cout << arr2[j++] << " "; 
} 
  

int main() 
{ 
  int arr1[] = {3, 4, 7, 10}; 
  int arr2[] = {2, 5, 6, 8, 9}; 
  int totalsize1 = sizeof(arr1)/sizeof(arr1[0]); 
  int totalsize2 = sizeof(arr2)/sizeof(arr2[0]); 
  getunion(arr1, arr2, totalsize1, totalsize2); 
  
  return 0; 
} 
