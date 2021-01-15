#include "iostream"
using namespace std;



int binarySearch(int arr[],int low,int high){

    if(low>high){
        return -1;
    }else
    {
       int mid=(low+high)/2;

       if (arr[mid] == mid)
       {
          return mid;
       }else if (arr[mid]> mid){
           return binarySearch(arr,low,mid);
       }else
       {
            return binarySearch(arr,mid+1,high);
       }
       
       
    }
    
}



int main(int argc, char const *argv[])
{
     int arr[10] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};  
    int n = sizeof(arr)/sizeof(arr[0]);  

    if(binarySearch(arr, 0, n-1)!=-1)
    cout<<"Fixed Point is "<< binarySearch(arr, 0, n-1);  
    else
        cout<<"NO fixed point";
    return 0;  
}  

