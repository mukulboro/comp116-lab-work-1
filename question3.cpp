/* To input 10 double precision floating points from user, store them in an array and compute mean and standard deviation  */
#include<iostream>
#include<cmath>
#define MAX 10

class Statistcs{
    private:
        double* array;

        double GetSum(){
            double sum=0;
            for(int i=0; i < MAX; i++){
                sum += array[i];
            }
            return sum;
        }
    public:
        Statistcs(double* list){
            array = list;
        }

        double GetMean(){
            return GetSum()/MAX;
        }

        double GetSD(){
            double numerator = 0, mean = GetMean();
            for(int i =0; i<MAX; i++){
                numerator += pow(array[i] - mean, 2);
            }

            return sqrt(numerator/(MAX-1));
        }
};

int main(){
    double inputArray[MAX];
    for(int i=0; i<MAX; i++){
        std::cout<<"Enter number in index "<<i<<" :";
        std::cin>>inputArray[i];
    }
    Statistcs stat = Statistcs(inputArray);
    std::cout<<"Mean: "<<stat.GetMean()<<std::endl;
    std::cout<<"SD: "<<stat.GetSD()<<std::endl;
    return 0;
}