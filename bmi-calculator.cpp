#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double heightFeets, heightInches, heightMeters, weight;
    
    cout<<"Welcome to BMI Calculator!"<<endl;

    cout<<"Enter your height in :"<<endl;
    
    cout << "Feets: ";
    cin >> heightFeets;

    cout << "Inches: ";
    cin >> heightInches;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    
    heightMeters = (heightFeets * 0.3048) + (heightInches * 0.0254);
    
    double bmi = weight / (heightMeters * heightMeters);
    cout<<"BMI value is: "<<setprecision(2)<<bmi<<endl;




















    return 0;
}