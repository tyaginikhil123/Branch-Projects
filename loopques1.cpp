#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r=1;r<=n; r++){
        //print n-r of spaces
        for(int i=0; i<n-r; i++){
            cout<<" ";
        }
        //print 2*r-1 number of stars
        for(int i=1; i<=2*r-1; i++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}