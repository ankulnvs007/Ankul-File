//Second small with oe=ne loop
//Author deenu-1001

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int small=arr[0],secsmall=arr[1];
    for (int i = 0; i < n; i++)
    {
        if(small>arr[i])
        {   
            secsmall=small;
            small=arr[i];
        }
        else if(secsmall>arr[i] && arr[i]>small)
        {
            secsmall=arr[i];
        }
        else if (secsmall==small && arr[i]>secsmall)
        {
            secsmall=arr[i];
        }
    }
    cout<<secsmall;
}
