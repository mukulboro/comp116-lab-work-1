// To swap two numbers (using references)
#include<iostream>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n1= 6, n2=9;
    std::cout<<"BEFORE SWAP: "<<n1<<" & "<<n2<<std::endl;
    swap(n1, n2);
    std::cout<<"AFTER SWAP: "<<n1<<" & "<<n2<<std::endl;
    return 0;
}