#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double heightFeets, heightInches, heightMeters, weight;
    string highCalorieDiet = "Focus on a calorie surplus: +300-500/day. \nInclude proteins (eggs, chicken, fish), carbs (rice, oats, pasta), healthy fats (nuts, avocados, olive oil), and snacks (smoothies, trail mix). \nExample meal: Breakfast - scrambled eggs, toast, avocado, milk. \nLunch - grilled chicken, quinoa, veggies. Dinner - salmon, brown rice, salad. Snack - yogurt, fruits, peanut butter.";
    string weightGainExercises = "Strength training: 3-5 days/week. \nKey lifts: Squats, Deadlifts, Bench Press, Rows, Pull-Ups. \nWeekly routine: \nDay 1 - Upper Push (Bench, Shoulder Press), \nDay 2 - Lower (Squats, Deadlifts), \nDay 4 - Upper Pull (Pull-Ups, Rows), \nDay 5 - Full Body (Power Cleans, Bulgarian Squats). \nRest on other days. Use progressive overload and track progress.";

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
    cout<<"BMI value is: "<<setprecision(3)<<bmi<<endl;

    //BMI Classification and Health Recommendation:

    if (bmi < 18.5){
        cout << "You are classified as Underweight"<<endl<<"Diet Recommendation:\n"<<highCalorieDiet<<endl<<"Exercise Recommendation:\n"<<weightGainExercises;
    } 
    else if (bmi >= 18.5 && bmi < 24.5){
        cout << "Normal weight";
    } 
    else if (bmi >= 24.5 && bmi < 29.5){
        cout << "Overweight";
    }






















    return 0;
}