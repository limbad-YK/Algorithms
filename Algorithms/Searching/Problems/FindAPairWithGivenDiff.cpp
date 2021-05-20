/*

Problem Statement 13:

Given an unsorted array and a number n, find if there exists
a pair of elements in the array whose difference is n.

*/

#include <iostream>
using namespace std;

bool findPair(int arr[], int size, int n)
{
	int i = 0;
	int j = 1;

	while (i < size && j < size)
	{
		if (i != j && arr[j] - arr[i] == n)
		{
			cout << "Pair Found: (" << arr[i] <<
						", " << arr[j] << ")";
			return true;
		}
		else if (arr[j]-arr[i] < n)
			j++;
		else
			i++;
	}

	cout << "No such pair";
	return false;
}

int main()
{
	int arr[] = {1, 8, 30, 40, 100};
	int size = sizeof(arr)/sizeof(arr[0]);
	int n = 60;
	findPair(arr, size, n);
	return 0;
}
