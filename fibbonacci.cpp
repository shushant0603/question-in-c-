#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first=0;int second=1;
    int third =1;
    for(int i=1;i<=n;i++){
      if(i==1){
        cout<<first<<endl;
    }else if(i==2){
        cout<<second<<endl;
    }else{
        cout<<third<<endl;;
        first=second;
        second=third;
        third=first+second;
    }   
    }
    
 return 0;
}