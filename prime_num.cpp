#include<iostream>
using namespace std;
int main()
{
   int n=7;
   bool x=true;
   if(n<1){
    cout<<"not a prime number";
   }
   for(int i=2;i*i<=n;i++){
    if(n%i==0){
        x=false;
        break;
    }
   }
   if(x){
    cout<<"prime number";
   }else{
    cout<<"not a prime number";
   }
 return 0;
}