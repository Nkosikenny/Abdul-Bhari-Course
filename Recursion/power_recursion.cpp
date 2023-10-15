#include <iostream>
using namespace std;
int power(int n, int m){
    if(n==0)
    return(1);
    if(n%2==0)
    return power(m*m,n/2);
    else
    return m*power(m*m,(n-1)/2);
}

int ipower(int m,int n){

  int num=m;

  for(int i=1; i<n; i++){
 
    num*=m;
   }
   return num;
}


int main(){

    int num=ipower(5,5);

    cout << num;

    return 0;
}