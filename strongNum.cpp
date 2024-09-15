#include<iostream>
using namespace std;
int main()
{
    int num=145;
    int r,f;
    int t=num;                     /*strong number means summation of factorial of indivisual number
                                             eg: 145= 1!+4!+5!   */
    int s=0;
    while(num>0){
        r=num%10;
        f=1;
        while(r>0){
            f=f*r;
            r--;
        }
        s=s+f;
        num=num/10;
    }
    if(s==t){
        cout<<"number is very strong";
    }else{
        cout<<"number is not strong";
    }
 return 0;
}