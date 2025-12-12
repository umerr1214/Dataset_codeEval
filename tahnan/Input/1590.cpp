#include <iostream>
using namespace std;class CurrencyConverter{public:double usd,eur,gbp;CurrencyConverter(double u,double e,double g){usd=u;eur=e;gbp=g;}double toEUR(double x){return x*eur;}double toGBP(double x){return x*gbp;}};int main(){CurrencyConverter c(1.0,0.9,0.8);cout<<c.toEUR(10)<<" "<<c.toGBP(10);}
