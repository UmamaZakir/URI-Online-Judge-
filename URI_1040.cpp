#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(1);
    double a,b,c,d,e;
    cin>>a>>b>>c>>d;
    double avg1,avg2;
    avg1 = ((a*2)+(b*3)+(c*4)+d)/10;
    cout<<"Media: "<<avg1<<"\n";
    if(avg1>=7.0)cout<<"Aluno aprovado."<<"\n";
    else if(avg1<5.0) cout<<"Aluno reprovado."<<"\n";
    else{
        cout<<"Aluno em exame."<<"\n";
        cin>>e;
        cout<<"Nota do exame: " <<e<<"\n";
        avg2=(avg1+e)/2;
        if(avg2>=5.0) cout<<"Aluno aprovado."<<"\n";
        else cout<<"Aluno reprovado."<<"\n";
        cout<<"Media final: "<<avg2<<"\n";
    }

    return 0;
}

