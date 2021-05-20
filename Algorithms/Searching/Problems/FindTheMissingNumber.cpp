/*

Problem Statement 1:

You are given a List of n-1 integers and these are in the range of 1 to n.
There are no duplicates in the list. One of the integer is missing in the
list. Write an efficient code to find the missing integer.

*/

#include<iostream>
using namespace std;

int getMissingNo(int a[],int n)
{
    int total=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
        total-=a[i];
    return total;
}

int main()
{
    int arr[]={1,2,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int miss=getMissingNo(arr,n);
    cout<<miss;

    return 0;
}
