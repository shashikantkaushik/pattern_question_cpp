//
//  Pattern_inverted number-.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 01/11/22.
//

#include<iostream>
using namespace std;
int main(){
    int n,i=1,j;
    cout<<"enter n";
    cin>>n;
    while(i<=n){
       int j=1;
       int val=n-i+1;
        while(j<=n-i+1){
            cout<<val;
                j++;
            }
            i++;
            cout<<endl;
        
    }
}
