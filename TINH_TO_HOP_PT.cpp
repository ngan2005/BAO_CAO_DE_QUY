#include<bits/stdc++.h>
using namespace std;
int TO_HOP(int n, int k){
    if(n == k || k == 0){
        return 1;
    }
    else{
        return TO_HOP(n - 1, k - 1) + TO_HOP(n - 1, k);
    }
}
int main(){
  int n, k;
  cin >> n >> k;
  cout << TO_HOP(n, k) << endl;
  return 0;
}

