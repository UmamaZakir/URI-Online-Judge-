#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string name1;
    getline(cin,name1);
    double s,t;
    cin>>s>>t;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<s+t*.15<<"\n";

    return 0;
}
