#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum= 0.0f;
    
    for( int i=1; i<=n; i++){
        int n_prod=1;
        int d_sum=0;
         int fact=1;
         for (int j = 1; j <=i; j++)
         {
             fact=fact*j;
             n_prod=n_prod*fact;
             d_sum=d_sum+(j+1.0);
         }
          sum = sum+((n_prod+0.0f)/d_sum);
          cout<<"for n ="<<i<<", ans= " <<sum<<"\n";
       }
        return 0;
}