#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    long long x,y;
    float snack;
    cin>>x>>y;
    float ar[5]={4.00,4.50,5.00,2.00,1.50};
    snack=ar[x-1]*y;
    cout<<"Total: R$ "<<snack<<"\n";
    return 0;
}

