#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={10,8,20,15};
    sort(arr,arr+4);
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}