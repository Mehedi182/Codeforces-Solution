#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    {
        if(n%4==0)
        {
            cout<<(n/4)-1;
        }
        else
            {
                cout<<n/4;
            }
    }
    else cout<<0;
}
