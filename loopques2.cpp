#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int r= 1; r<=(n+2)/2;r++){
    //prinnt r-1 spaces
    for (int i=0; i<r-1; i++){
        cout<<" ";
    }
    //print first star
    cout<<"*";
    //print n-2*(r-1)spaces 
    for (int i = 0; i<n-2*(r-1); i++)
    {
        cout<<" ";
    }
    //print second star
    cout<<"*";
    cout<<"\n";
    }
    //for handling odd n
    if (n%2==1) {
       for (int i=0; i<(n+1)/2; i++){
           cout<<" ";
       }
       //print first star 
       cout<<"* ";
       cout<<"\n";
       
    }
    
     for (int r=(n+2)/2; r>=1;r--){
    //prinnt r-1 spaces
    for (int i = 0; i<r-1; i++)
    {
        cout<<" ";
    }
    //print first star
    cout<<"*";
    //print n-2*(r-1)spaces 
    for (int i = 0; i<n-2*(r-1); i++)
    {
        cout<<" ";
    }
    //print second star
    cout<<"* ";
    cout<<"\n";
    }
    

    
    
    


    return 0;
}