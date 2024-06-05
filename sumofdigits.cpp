//sum of the fdigits
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
   

    while(n>0){
        int b=n%10;

        a=a+b;
        

        n=n/10;


    }
cout<<a;

}