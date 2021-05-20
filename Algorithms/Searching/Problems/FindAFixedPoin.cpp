/*

Problem Statement 11:

Given an array of n distinct integers sorted in ascending order,
write a function that returns a Fixed Point in the array, if there
is any Fixed Point present in array, else returns -1. Fixed Point
in an array is an index i such that arr[i] is equal to i. Note that
integers in array can be negative

*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high)
{
	if(high >= low)
	{
		int mid = (low + high)/2;
		if(mid == arr[mid])
			return mid;
		if(mid > arr[mid])
			return binarySearch(arr, (mid + 1), high);
		else
			return binarySearch(arr, low, (mid -1));
	}

	return -1;
}

int main()
{
	int arr[10] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Fixed Point is "<< binarySearch(arr, 0, n-1);
	return 0;
}
