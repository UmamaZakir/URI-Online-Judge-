
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,c,mab,m;
    cin>>a>>b>>c;
    mab=(a+b+abs(a-b))/2;
    m=(mab+c+abs(mab-c))/2;
    cout<<m<<" eh o maior"<<"\n";

    return 0;
}
