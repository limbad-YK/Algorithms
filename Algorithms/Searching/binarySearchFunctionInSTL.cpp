#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> arr={10,15,20,25,30,35};

    if(binary_search(arr.begin(),arr.end(),15))
        cout<<"15 exist in vector";
    else
        cout<<"15 does not exist";

    cout<<endl;

    if(binary_search(arr.begin(),arr.end(),23))
        cout<<"23 exist in vector";
    else
        cout<<"23 does not exist";
}
