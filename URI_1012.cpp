#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a,b,c,pi=3.14159;
    cin>>a>>b>>c;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<(a*c)/2<<"\n";
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<pi*c*c<<"\n";
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<(a+b)/2*c<<"\n";
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<b*b<<"\n";
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<a*b<<"\n";
    return 0;
}
