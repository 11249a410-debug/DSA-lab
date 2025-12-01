//Aim: 
#Search for a target value in an array using linear search.

#Algorithm:
Start
Read the size of the array n.
Declare an array A of size n.
Input n elements into array A.
Read the search element (key).
Perform Linear Search:
Set i = 0
Repeat while i < n:
If A[i] == key, then return i (position found)
Else increase i by 1
If loop ends → key not found, return -1
Check returned value:
If result = -1, display "Not found"
Else display "Found at position result"
Stop
//
Code:
#include<stdio.h>

" int linearsearch(int A[] , int n , int key)" {
    for (int i =0 ; i<n;i++){
        if(A[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    printf("enter the size of the array:");
    scanf("%d",&n);
    
    int A[n];
    printf("enter the elements in the array one by one:");
    for (int i =0; i<n;i++){
        scanf("%d",&A[n]);
    }
    
    printf("enter the key to be searched in the array:");
    scanf("%d",&key);
    
    int result = linearsearch(A,n,key);
    
    if(result == -1){
        printf("Not found!!");
    }
    else{
        printf("Found at %d position");
        return 0;
    }
}

//Sample Output:
enter the size of the array:5
enter the elements in the array one by one:1
2
3
4
5
enter the key to be searched in the array:6
Not found!!

Result:
O(n) time; correct for unsorted arrays.
//
