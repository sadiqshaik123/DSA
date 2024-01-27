#include <iostream>

using namespace std;
int Binarysearch(int arr[],int low,int high,int len,int target){
    int mid=low+(high-low)/2;
    while(low<=high){
        if(arr[mid]==target){
            return mid+1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
    }
    return -1;

}

int main()
{
    int len;
    cout<<"Enter Length: ";
    cin>>len;
    int arr[len];
    cout<<"Enter Elements: ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter element to search: ";
    cin>>target;
    int result=Binarysearch(arr,0,len-1,len,target);
    if(result!=-1){
        cout<<"Element found at "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
