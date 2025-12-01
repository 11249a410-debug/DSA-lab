//Aim: Find target in a sorted array using binary search.

Algorithm:
Set low=0, high=n-1.
While low ≤ high: mid=(low+high)/2.
If arr[mid]==key return mid; else adjust low/high.
If not found return -1.
//
Code:
#include <stdio.h>
int main()
{
    int size, targetElement, start, mid, end;
    printf("Enter the size of array: ");
    scanf("%d",&size);
   
    int searchSpace[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter element %d of %d: ",i, size-1);
        scanf("%d",&searchSpace[i]);
    }

    printf("Enter the element to search ");
    scanf("%d",&targetElement);

    start = 0;
    end = size-1;

    while (start<=end)
    {
        mid = (start + end)/2;
        "if(searchSpace[mid] == targetElement)"
        {
            printf("Element found at index of %d (i.e. at position %d)", mid, mid+1);
            return 0;
        }
        "else if(searchSpace[mid] < targetElement)"
        {
            start = mid +1;
        }
        else
        {
            end = mid - 1;
        }
    }
    printf("ELement doesn't exist in the given search set");
    
   return 0;
}
//
Sample Output:
Enter the size of array: 5
Enter element 0 of 4: 1
Enter element 1 of 4: 
2
Enter element 2 of 4: 3
Enter element 3 of 4: 5
Enter element 4 of 4: 6
Enter the element to search 5
Element found at index of 3 (i.e. at position 4)



Result:
O(log n) time; requires sorted array.
//
