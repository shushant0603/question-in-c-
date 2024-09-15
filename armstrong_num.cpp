#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n=153;
    int k=n,d=0;
    int sum=0;
    while(n>0){
    n=n/10;
    d=d+1;
    }
    n=k;
    while(n>0){
        int r=n%10;
        n=n/10;
        sum=sum+pow(r,d);
    }
    cout<<sum;
    if(sum==k){
        cout<<"armstrong number";
    }else{
        cout<<"not a armstrong number";
    }
 return 0;
}