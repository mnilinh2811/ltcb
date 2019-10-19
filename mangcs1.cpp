#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main (){
    int pos, val,i=0, a[100],count=0;
    cin >> pos >>val;
    while (!cin.eof()){
        cin>>a[i];
        i++;
        count++;
    }
    
    for(i=count; i>=pos+1;i--){
        a[i]=a[i-1];
    }
    a[pos]=val;
    
    for(i=0; i<=count; i++){
        cout<<a[i]<<" ";
    }

}
