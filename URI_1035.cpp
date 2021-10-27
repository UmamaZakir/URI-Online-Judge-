#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ///cout << fixed << setprecision(2);
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum1=a+b;
    int sum2=c+d;
    if(b>c && d>a && sum2>sum1 && c>0 && d>0 && a%2==0){
        cout<<"Valores aceitos";
    }
    else{
        cout << "Valores nao aceitos\n";
    }
    return 0;
}

