//理解显式具体化
#include<iostream>
#include<string>
#include<string.h>
using namespace std;


template<typename T>
T maxn(T* array, int arraySize){
    T max=0;
    for(int i=0;i<arraySize;i++){
        if(T<array[i]){
            max=array[i];
        }
        
    }

    return max;
}

template<> char* maxn<char*>(char* array[] , int arraySize)
{
    char* maxStr=array[0];
    for(int i=0;i<arraySize;i++)
    {
        if(strlen(array[i])>strlen(maxStr)){
            maxStr=array[i];
        }
    }

    return maxStr;
}

int main(void)
{
    
}
