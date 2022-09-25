#include <iostream>
using namespace std;

int main(){
    char c;
    cin>>c;
    int val=c;
    if((val>=48)&&(val<=57)){
        cout<<"This is numeric."<<endl;
    }
    else if((val>=65)&&(val<=90)){
        cout<<"This is uppercase."<<endl;
    }
    else if((val>=97)&&(val<=122)){
        cout<<"This is lowercase."<<endl;
    }
    else{
        cout<<"Invalid."<<endl;
    }

    return 0;
}
