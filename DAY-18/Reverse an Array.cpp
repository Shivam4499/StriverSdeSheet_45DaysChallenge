// ******************************************** Reverse Function *************************************************** //


#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

int main()
{
    int n;
    cout<<"size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    cout<<"reversed array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}