//border of the rectangle print no 
#include<iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            if(i==1||i==n||j==1||j==c){
                cout<<j;

            }
            else{
                cout<<" ";

            }
        }
        cout<<endl;

    }
}