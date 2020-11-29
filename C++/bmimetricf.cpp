#include <iostream>
using namespace std;

float bmimetricf(int weight, float height);


int main() {
    int weight = 50;
    float height = 1.58;
    printf("BMI is: %3.2f", bmimetricf(weight, height)) ;
    return 0;
}


float bmimetricf(int weight, float height){
    return weight / (height*height);
}
