
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl

int main()
{
    int t;
    cin>>t;
    
    while(t--) {
        long long a, b, c, d;
        cin>>a>>b>>c>>d;
        
        if((double) a / (double) b == (double) c / (double) d) {
            cout<<"0"<<endl;
        }
        
        else if(a == 0 || c == 0) {
            cout<<"1"<<endl;
        }
        
        else if(((a * d) % (c * b) == 0) || ((c * b) % (a * d) == 0)) cout<<"1"<<endl;
        
        else cout<<"2"<<endl;
    }

    return 0;
}