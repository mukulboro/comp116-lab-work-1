// To return multiple values from a function
#include<iostream>

int* returnMultiple(int n1, int n2);

int main(){
    int* output = returnMultiple(6, 9);
    std::cout<<output[0]<<" & "<<output[1]<<" were returned from function."<<std::endl;
    return 0;
}

int* returnMultiple(int n1, int n2){
    int *array;
    array[0] = n1+n2;
    array[1] = n1*n2;
    return array;
}
