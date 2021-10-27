#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    double amount;
    cin>>amount;

    int temp=amount * 100;

    int t=temp /100;
    int p=temp %100;


    cout<<"NOTAS:\n";

    int notes[6]={100, 50, 20, 10, 5, 2};

    for(int i=0;i<6;i++){
        cout<<t/notes[i]<<" nota(s) de R$ "<<notes[i]<<".00\n";
        t=t%notes[i];
    }
    cout<<"MOEDAS:\n";
    p=t*100+p;
    int coin[6]={100, 50, 25, 10, 5, 1};
    for(int i=0;i<6;i++){
        cout<<p/coin[i]<<" moeda(s) de R$ "<<coin[i]/100.0<<"\n";
        p=p%coin[i];
    }

    return 0;
}

