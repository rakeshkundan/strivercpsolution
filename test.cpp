#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int mxx=arr[n-1]-arr[0];
        int temp=0;
        int temp2=INT_MAX;
        for(int i=0;i<n;i++)
        {
            temp=max(temp,arr[i]);
            temp2=min(temp2,arr[i]);

        }
        mxx=max(arr[n-1]-temp2,mxx);
        mxx=max(temp-arr[0],mxx);
        for(int i=n-1;i>0;i--)
        {
            mxx=max((arr[i-1]-arr[i]),mxx);
        }
        cout<<mxx<<endl;

    }
    return 0;
}