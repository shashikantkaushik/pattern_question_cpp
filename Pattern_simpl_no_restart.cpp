//
//  Pattern_simpl_no_restart.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 29/10/22.
//

#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter Number";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}
