
#include "iostream"

using namespace std;

void nextGreatest(int arr[],int n){
    int max_right =-1;
    for (int i = n-1; i >= 0; i--)
    {
        if( arr[i] > max_right){
            int temp=arr[i];
            arr[i] = max_right;
            max_right = temp;
        }else{
            arr[i] =max_right;
        }
    }
    
}


int main(int argc, char const *argv[])
{
    
    int arr[] = {16, 17, 4, 3, 5, 2};  
    int size = sizeof(arr)/sizeof(arr[0]);  
    nextGreatest (arr, size); 

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    
    return 0;
}
