#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(3);
    int n;
    int i;
    cin>>n;
    cout<<n;
    cout<<"\n";
    int arr[7]={100, 50, 20, 10, 5, 2, 1};
    for(i=0;i<7;i++){
        cout << n/arr[i] << " nota(s) de R$ "<< arr[i] <<",00\n";
        n = n%arr[i];
    }
    return 0;
}
