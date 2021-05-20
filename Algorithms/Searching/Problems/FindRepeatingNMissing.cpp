/*

Problem Statement 10:

Given an unsorted array of size n. Array elements are in the range from 1 to n.
One number from set {1, 2, …n} is missing and one number occurs twice in the array.
Find these two numbers.

*/

#include <iostream>
using namespace std;

void printTwoElements(int arr[], int size)
{
	int i;
	cout << " The repeating element is ";

	for (i = 0; i < size; i++) {
		if (arr[abs(arr[i]) - 1] > 0)
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
		else
			cout << abs(arr[i]) << "\n";
	}

	cout << "and the missing element is ";
	for (i = 0; i < size; i++) {
		if (arr[i] > 0)
			cout << (i + 1);
	}
}

int main()
{
	int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printTwoElements(arr, n);
}
