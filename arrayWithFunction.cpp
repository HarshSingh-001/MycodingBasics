#include <iostream>
using namespace std;

void printArray( int ar[] , int size ){
    for(int i = 0 ; i < size ; i++){
        cout<<ar[i]<< " " <<endl;
    }
}


int main(){
    int num[10] = {10 ,15, 56 ,89 ,46 ,598 ,31, 64 ,56 , 15};
    printArray(num , 10);
    
}