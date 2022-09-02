#include<iostream>
using namespace std;

void merge(int arr[],int s, int mid, int e){
    
}
void mergeSort(int arr[],int s,int e){
if(s>e){
    return;
}
int mid = (s+e)/2;
mergeSort(arr,s,mid);
mergeSort(arr,mid+1,e);
merge(arr,s,mid,e);
}
int main(){
    int arr[5] = {5,4,3,6,10};
    int size = 5;
    mergeSort(arr,0,size-1);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}