/*

Problem Statement 12:

Given an array of integers which is initially increasing and
then decreasing, find the maximum value in the array.

*/

#include <iostream>
using namespace std;

int findMaximum(int arr[], int low, int high)
{
	if (low == high)
		return arr[low];

	if ((high == low + 1) && arr[low] >= arr[high])
		return arr[low];

	if ((high == low + 1) && arr[low] < arr[high])
		return arr[high];

	int mid = (low + high)/2;

	if ( arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
		return arr[mid];

	if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
		return findMaximum(arr, low, mid-1);

	else
		return findMaximum(arr, mid + 1, high);
}

int main()
{
	int arr[] = {1, 3, 50, 10, 9, 7, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "The maximum element is " << findMaximum(arr, 0, n-1);
	return 0;
}
