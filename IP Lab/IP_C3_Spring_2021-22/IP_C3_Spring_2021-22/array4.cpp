#include<iostream>
using namespace std;


int main()
{
    int arr[500],n,i;
    cout<<"Enter the size of array     : ";
    cin>>n;
    cout<<"Enter the elements of array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Inserted array........."<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


