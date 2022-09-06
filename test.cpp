#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<string> >v(n);
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]=="Tetrahedron")
        {
            sum+=4;
        }
        // else if(v[i][0]=='C')
        // sum+=6;
        // else if(v[i][0]=='O')
        // sum+=8;
        // else if(v[i][0]=='D')
        // sum+=12;
        // else
        // sum+=20;
    }
    cout<<sum<<endl;
    return 0;
}