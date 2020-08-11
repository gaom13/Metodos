#include <bits/stdc++.h>

#define clr(x) memset((x), 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define For(i, st, en) for(int i=(st); i<=(int)(en); i++)
#define Ford(i, st, en) for(int i=(st); i>=(int)(en); i--)
#define forn(i, n) for(int i=0; i<(int)(n); i++)
#define forn2(i, n) for(int i=0; i<=(int)(n); i++)
#define ford(i, n) for(int i=(n)-1; i>=0; i--)
#define fori(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define in(x) int (x); input((x));
#define x first
#define y second
#define less(a,b) ((a) < (b) - EPS)
#define more(a,b) ((a) > (b) + EPS)
#define eq(a,b) (fabs((a) - (b)) < EPS)
#define remax(a, b) ((a) = (b) > (a) ? (b) : (a))
#define remin(a, b) ((a) = (b) < (a) ? (b) : (a))
#define salfinal(x) cout<<x<<endl;
using namespace std;
float e=exp(1);
const float MAX =1e-6;
double fx(float x){
    return 21-(pow(e,(x*-0.095))*32);
}
float fpx(float x){
    return pow(e,(x*-0.095))*3.04;
}
void newton(float x,float eps){
    float temp=x*2;
    int cant=0;

    while((abs((x-temp)/x)*100)>eps){
        temp=x;
        x=x-(fx(x)/fpx(x));
        cout<<"I: "<<++cant<<" \tX(i): "<<x<<" \tError: "<<abs((x-temp)/x)*100<<endl;

    }
    cout<<endl<<endl;
    cout<<setprecision(5)<<"Iteracion total: "<<cant<<"\nValor Final: "<<x<<"\nError Final: "<<(abs((x-temp)/x)*100)<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cout<<"***********************************************"<<endl;
    cout<<"*+-------------------------------------------+*"<<endl;
    cout<<"*|     Newton Raphson con valor inicial 6    |*"<<endl;
    cout<<"*+-------------------------------------------+*"<<endl;
    cout<<"***********************************************"<<endl<<endl;

    newton(6,5e-3);

    return 0;
}
