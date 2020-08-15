# Binary Search with Recursion
## AIM OF THE EXPERIMENT : To find an element in an array using Binary search using recursion.
### DESCRIPTION : The binary Search algorithm search the position of the key value in a sorted array.It compares the key value with the middle element of the array.If the element is equal to the key element it returns the index of the element.Using recursion, the function calls itself again and again with a different set of values.
#### STEP BY STEP PROCEDURE :
1. Declare the functions RecBinarySearch with arguments .
2. Create an array of size 10 and input the values of the array in a sorted order and scan the key to be found.
3. We need to find the mid value which is the sum of initial and final values divided by 2.
4. we need to compare mid value and the key value by calling the function declared
5. If the key value and mid value are same, it returns the index of the mid value.
6.If the key value is less than the mid value search theupper half of the array and if the key value is greater than mid value then search the lower half of the array by recursively calling the function until key value = mid value.

OUTPUT 1(If the key is 16) :
The mid value here is 15. As the key value is greater than the mid value we search the upper half of the array by recursively calling the function.The output obtained is the element is found in position 5.

OUTPUT 2(If the key is 7) :
As key value is less than the mid value we search the lower half of the array by recursively calling the function until key element is equal to mid element.It returns the output as the element is in the position 1.

OUTPUT 3 (If the key is 67):
when the key value is 67 it compares with the mid value and searches the upper half of the array as key value is greater than the mid value.It returns the output as the element is found in position 8.

![Screenshot (13)](https://user-images.githubusercontent.com/69144342/90311631-90d14900-df1a-11ea-827e-9fc86c2b413a.png)

![Screenshot (12)](https://user-images.githubusercontent.com/69144342/90311632-92027600-df1a-11ea-9dce-7e48f3bf3e95.png)

![Screenshot (14)](https://user-images.githubusercontent.com/69144342/90311634-962e9380-df1a-11ea-8438-27c28d43cd6d.png)

