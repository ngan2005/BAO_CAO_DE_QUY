#include"bits/stdc++.h"
using namespace std;
void CD_HEXA_TT(long long n){
  if(n<16){
    if(n<10){
        cout<<n;
    }
    else{
        cout<<(char)(n+55);
    }
  }
  else{
        CD_HEXA_TT(n/16);
        int r= n%16;
        if(r<10){
             cout<<r;
        }
        else{
             cout<<(char)(r+55);
        }
  }
}
int main(){
  int n;
  cout<<"nhap n:";
  cin>>n;
  CD_HEXA_TT(n);
  return 0;
}