#include<iostream>
using namespace std;


// LEFT ROTATE THE ELEMENT BY 1
// PARAMETERS : ARRAY, LENGHT OF ARRAY
void leftRotateByOne(int arr[],int lenghtOfArray){
    int temp = arr[0];
    for(int elem=0;elem<lenghtOfArray-1;elem++){
        arr[elem] = arr[elem+1];
    }
    arr[lenghtOfArray-1]= temp;
}

// WILL PRINT THE FULL ARRAY.
// PARAMETERS : ARRAY, LENGHT OF ARRAY
void printFullArray(int arr[],int lengthOfArray){
    for(int elem=0;elem<lengthOfArray;elem++){
        cout<<arr[elem]<<" ";
    }
}

// LEFT ROTATE FUNCTION
// PARAMETERS : ARRAY, NO. OF ROTATTIONS ,LENGHT OF ARRAY
void leftRotate(int arr[],int noOfTimesToRotate,int lengthOfArray){
    for(int elem=0;elem<noOfTimesToRotate;elem++){
        leftRotateByOne(arr,lengthOfArray);
    }
    printFullArray(arr,lengthOfArray);
}

// MAIN FUNCTION
int main(){
    int arr[]={1,2,3,4,5};
    int lengthOfArray = sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr,2,lengthOfArray);
    return 0;
}