#include <iostream>  
using namespace std;  

int binary_search (int [], int, int, int);  
int main ()  
{  

    int i, arr[100], tgt, num, ind, st, end;  
    cout << " Define the size of an array: ";  
    cin >> num;     
    cout << " Enter " << num << " elements in ascending order: " << endl; 
    for ( i = 0; i < num; i++)  
    {  
        cout << " arr [" << i << "] = ";  
        cin >> arr[i];  
    }  
    
    cout << " \n Enter an element to be searched in ascending array: ";  
    cin >> tgt;     
     
    ind = binary_search (arr, 0, num - 1, tgt);   
    
    if (ind == 0)  
        cout << tgt << " is not available in the array-list";     
    else  
        cout << tgt << " is available at position " << ind << endl;  
    return 0;  
}  

int binary_search (int arr[], int st, int end, int tgt)  
{  
    int mid;  
    if (st > end)  
    {  
        return 0;  
    }  
    mid = (st + end) / 2;  
      
      
    if (arr[mid] == tgt)  
    {  
        return (mid + 1);  
    }  
      
    else if (arr[mid] > tgt)  
    {  
        binary_search (arr, st, mid - 1, tgt);  
    }  
      
    else if (arr [mid] < tgt)  
    {  
        binary_search (arr, mid + 1, end, tgt);  
    }  
}  
