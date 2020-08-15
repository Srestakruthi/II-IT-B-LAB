# Binary Search
## AIM OF THE EXPERIMENT : To find the element in an array using Binary Search.
### DESCRIPTION : Binary Search algorithm applies to the sorted array for searching an element.The search starts with comparing the key element with the middle element.If the values matches then the position of the element is returned.
#### STEP BY STEP PROCEDURE :
1. Create an array and input the elements in it. Make sure that the elements are in the sorted order.
2. In this the search starts with comparing the key element with the mid element. So we need to find the mid index of the array which is the sum of initial and final index divided by 2.
3. After finding the mid value we need to check whether the mid value and key value are same.If they are same, then return mid index.
4. If key value is less than mid value then our new last value = mid - 1
5. If key value is greater than mid value, then our new initial value = mid + 1
6. We need to repeat our process until we find our key element. If the key element is not found, it returns the element is not found.

we have the array in the sorted order as a[10] = {4,7,9,11,15,16,21,31,67,98}

OUPUT 1 (If the key is 16) :
If the key value to be found is 16, we get the output as the element is found in position 5.

OUTPUT 2 (If the key is 7) :
If the key value to be found is 7, we get the output as the element is found in postion 1.

OUTPUT 3(If the key is 67) :
If the key value to be found is 67, we get the output as the element is found in position 8.

