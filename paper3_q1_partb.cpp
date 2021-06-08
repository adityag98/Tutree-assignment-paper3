//PAPER 3 QUESTION 1 PART B
//Intersection of two sorted arrays
#include <bits/stdc++.h> 
using namespace std; 
  
void GetIntersection(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) 
       i++; 
    else if (arr2[j] < arr1[i]) 
       j++; 
    else /* if arr1[i] == arr2[j] */
    { 
       cout << arr2[j] << " "; 
       i++; 
       j++; 
    } 
  } 
} 

int main() 
{ 
  int arr1[] = {5, 7, 8, 2, 12, }; 
  int arr2[] = {1, 5, 6, 12}; 
    
  int totalsize1 = sizeof(arr1)/sizeof(arr1[0]); 
  int totalsize2 = sizeof(arr2)/sizeof(arr2[0]); 

  GetIntersection(arr1, arr2, totalsize1, totalsize2); 
  
  return 0; 
} 
