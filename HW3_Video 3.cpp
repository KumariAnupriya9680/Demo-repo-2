#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sq=sqrt(n);
    int c=0;
    for(int i=2;i<=sq;i++){
        if((n%i)==0){
            break;
        }
        c++;
    }
    
    if((c==(sq-1))&&(n!=1)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }


    return 0;
}
