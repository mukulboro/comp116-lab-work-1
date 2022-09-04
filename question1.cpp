// To find ASCII Value of character input by user.
#include<iostream>

int main(){
    char userInput; int asciiValue;
    std::cout<<"Enter a character: "<<std::endl;
    std::cin>>userInput;
    asciiValue = int(userInput);
    std::cout<<"ASCII value of "<<userInput<<" is "<<asciiValue<<std::endl;
    return 0;
}