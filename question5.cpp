// To find roots of quadratic equation
#include<iostream>
#include<cmath>

float firstRoot(int A, int B, int C){
    return (-B + sqrt(pow(B,2)-4*A*C))/(2*A);
}
float secondRoot(int A, int B, int C){
    return (-B - sqrt(pow(B,2)-4*A*C))/(2*A);
}

int main(){
    int a, b, c;
    float root1, root2;
    std::cout<<"Enter values of A, B and C (Ax2+Bx+c): "<<std::endl;
    std::cin>>a>>b>>c;
    root1 = firstRoot(a, b, c);
    root2 = secondRoot(a, b,c);
    std::cout<< root1 << " & " << root2 <<" are the roots."<<std::endl;
    return 0;
}