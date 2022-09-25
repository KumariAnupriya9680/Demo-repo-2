#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1 ; i <= n; i++)
    {
        //first triangle
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }

        //second triangle
        for(int j=1;j<=n-1;j++){
            if(i==1){
                break;
            }
            cout<<"* ";
        }

        //third triangle


        cout<<endl;
    }
        

    return 0;
}
