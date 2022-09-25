#include <iostream>
using namespace std;

void inputArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
}

void swap(int &a, int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[100];

    inputArray(arr,n);
    reverseArray(arr,n);
    printArray(arr,n);

    return 0;
}
