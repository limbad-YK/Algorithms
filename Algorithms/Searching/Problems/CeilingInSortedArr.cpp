/*

Problem Statement 8:

Given a sorted array and a value x, the ceiling of x is the smallest
element in array greater than or equal to x, and the floor is the greatest
element smaller than or equal to x. Assume than the array is sorted in
non-decreasing order. Write efficient functions to find floor and ceiling of x.

*/

#include <iostream>
using namespace std;

int ceilSearch(int arr[], int low, int high, int x)
{

	int i;

	if(x <= arr[low])
		return low;

	for(i = low; i < high; i++)
	{
		if(arr[i] == x)
		return i;

		if(arr[i] < x && arr[i+1] >= x)
		return i+1;
	}
	return -1;
}

int main()
{
	int arr[] = {1, 2, 8, 10, 10, 12, 19};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 3;
	int index = ceilSearch(arr, 0, n-1, x);
	if(index == -1)
		cout << "Ceiling of " << x << " doesn't exist in array ";
	else
		cout << "ceiling of " << x << " is " << arr[index];

	return 0;
}
