#include <iostream>
using namespace std;

void inputArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
}

bool linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
    
}

int main(){
    int n,key;
    cin>>n>>key;
    int arr[100];

    inputArray(arr,n);

    if(linearSearch(arr,n,key))
    cout<<"Found"<<endl;
    else
    cout<<"Not Found"<<endl;



    return 0;
}
