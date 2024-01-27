#include <iostream>

using namespace std;

int linearSearch(int arr[],int len,int target){
    for(int i=0;i<len;i++){
        if(arr[i]==target){
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int len;
    cout<<"Enter Length of the array: ";
    cin>>len;
    int arr[len];
    cout<<"Enter elements :";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter element to search: ";
    cin>>target;
    int LinearResult = linearSearch(arr,len,target);
    if(LinearResult!=-1){
            cout<<"Element found at "<<LinearResult<<endl;
    }
    else{
        cout<<"Element Not found "<<endl;
    }
    return 0;
}
