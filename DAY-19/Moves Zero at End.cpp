// ********************************************** Naive Soln ****************************************************** //




#include<bits/stdc++.h>
using namespace std;

// void moveToEnd(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(arr[j]!=0)
//                 {
//                     swap(arr[i],arr[j]);
//                 }
//             }
//         }
//     }
// }


// ************************************************* Efficient Soln **************************************************** //

void moveToEnd(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
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
    moveToEnd(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}