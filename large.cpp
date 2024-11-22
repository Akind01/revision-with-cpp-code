#include<iostream>
using namespace std;

int funLarge(int arr[],int size){
    int i,large=0;
    for(i=0; i<size; i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }

    return large;
}

int main(){
    int i,n;

    cout<<"Enter the number of elements to be store : ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements below !"<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The large number is : "<<funLarge(arr,n)<<endl;


    return 0;
}
