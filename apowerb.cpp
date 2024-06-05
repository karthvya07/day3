//program for a power b
#include<iostream>
using namespace std;
 int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int result=a;

    for(int i=1;i<b;i++){
        result*=a;

 }
 cout<<result;
 return 0;

 }
