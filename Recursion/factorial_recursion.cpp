#include <iostream>
using namespace std;
int fact(int n){
  if(n==0)
    return 1;
  else
    return fact(n-1)*n;
}

int ifact(int n){
  int s=0;
  int i;
  for(i=1; i<=n; i++){
    s=s*i;
    }
    
  return s;
}

int main(){
    int x=5;

    int num=ifact(x);

    cout << num;

    return 0;
}