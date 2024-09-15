#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
           cout<<" ";
        }
      //  cout<<1<<endl;
      for(int j=1;j<=i;j++){
        if(t>99)
          cout<<t;
        else if(t<=10)
           cout<<"  "<<t;
        else 
            cout<<t<<"  ";
            t++;

      }
            cout<<endl;
    }
      
 return 0;
}