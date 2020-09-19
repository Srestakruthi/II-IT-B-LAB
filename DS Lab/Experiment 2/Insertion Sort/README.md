
# INSERTION SORT
## Aim: To sort the elements of an array by using insertion sort.
### Description: Insertion sort is the sorting mechanism by which the elements of an array are sorted. The array elements are compared with each other sequentially and then arranged simultaneously in sorted order.
#### Procedure:
1. First declare an array to be sorted and scan the array elements.
2. We start by making the second element of the array, i.e. element at index 1, the key.
3. We compare the key element with the elements before it, in this case element at index 0:
 ->If the key element is less than the first element, we insert the key element before the first element.
 ->If the key element is greater than the first element, then we insert it after the first element.
4. Then, make the third element as the key and compare it with elements to its left and insert it in right position.
5. And we go on repeating this, until the array is sorted.


OUTPUT 1: when we input the array size as 5 and the array to be sorted as {19, 12, 45, 11, 10} the key element i.e, initially the element at index 1 is compared with elements that are left to it and key is incremented and this process is repeated until the entire array is sorted. In this case we get the output as {10, 11, 12, 19, 45}.

![Screenshot (29)](https://user-images.githubusercontent.com/69144342/93665575-1e153980-fa95-11ea-91bb-3607cde3cc17.png)



OUTPUT 2: when we input the array size as 5 and the array to be sorted as {10, -3, -1, 15, 83} with negative elements the key element is compared with the elements before it and this process continues until the entire array is sorted. Here we get the output as {-3, -1, 10, 15, 83}.

![Screenshot (30)](https://user-images.githubusercontent.com/69144342/93665578-23728400-fa95-11ea-9274-4be7771448af.png)



OUTPUT 3: In this case, if we taken an array which is already sorted {1, 3, 7, 9, 17} it compares the key element with the elements before it.As this array is already sorted, we get the output as {1, 3, 7, 9, 17}.

![Screenshot (31)](https://user-images.githubusercontent.com/69144342/93665581-266d7480-fa95-11ea-9b51-fbabd2d7e086.png)
