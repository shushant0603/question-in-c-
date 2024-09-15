#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int largest=max({a,b,c});
    int minimum=min({a,b,c});
    cout<<largest<<" "<<minimum;
    // if(a>b && b>c){
    //     cout<< a;
    // }else if(b>a && b>c){
    //     cout<< b;
    // }else{
    //     cout<< c;
    // }
    // int arr[]={10,9,8,7,6,5,4,3,2,1};
    //    sort(arr,arr+10);
    // for(int i=0;i<10;i++){
    //   cout<<arr[i];
    // }
 return 0;
}