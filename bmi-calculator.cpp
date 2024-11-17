#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double heightFeets, heightInches, heightMeters, weight;
    
    //Strings to be displayed to the person of Underweight Category.
    string highCalorieDiet = "Focus on a calorie surplus: +300-500/day. \nInclude proteins (eggs, chicken, fish), carbs (rice, oats, pasta), healthy fats (nuts, avocados, olive oil), and snacks (smoothies, trail mix). \nExample meal: Breakfast - scrambled eggs, toast, avocado, milk. \nLunch - grilled chicken, quinoa, veggies. Dinner - salmon, brown rice, salad. Snack - yogurt, fruits, peanut butter.";
    string weightGainExercises = "Strength training: 3-5 days/week. \nKey lifts: Squats, Deadlifts, Bench Press, Rows, Pull-Ups. \nWeekly routine: \nDay 1 - Upper Push (Bench, Shoulder Press), \nDay 2 - Lower (Squats, Deadlifts), \nDay 4 - Upper Pull (Pull-Ups, Rows), \nDay 5 - Full Body (Power Cleans, Bulgarian Squats). \nRest on other days. Use progressive overload and track progress.";

    //Strings to be displayed to the person of Normal Weight Category.
    string balancedDiet  = "Balanced Diet: Eat whole grains, lean proteins, healthy fats, fruits, and veggies. \nStay hydrated (8-10 glasses water/day). Avoid processed foods.";
    string aerobicExercises = "Do 150 mins/week of aerobic exercise (walk, jog, cycle). \nAdd 2-3 days of strength training and flexibility exercises (yoga, stretching). \nRest: Sleep 7-9 hours daily and take recovery days.";

    //Strings to be displayed to the person of Overweiht Category.
    string calorieControlledDiet = "Maintain a calorie deficit (-500/day) for weight loss. Focus on lean proteins (chicken, tofu, fish), low-calorie carbs (vegetables, whole grains), and healthy fats (avocado, nuts). Example: Breakfast - egg whites, spinach, whole-grain toast. Lunch - grilled chicken salad with olive oil. Dinner - baked salmon, steamed broccoli, quinoa. Snacks - almonds, low-fat Greek yogurt. Drink water or unsweetened beverages.";
    string exerciseRoutine = "Combine cardio and strength training: 150-300 mins cardio (running, cycling, HIIT) + 2-3 strength sessions/week. Example: Mon/Wed/Fri - 30 mins cardio + 20 mins strength (squats, push-ups, planks). Tue/Thu - 40 mins cycling or brisk walking. Rest/stretch on weekends.";

    //Exercises to be displayed to the person of Obesity Category.
    string weightLossExercise = "Combine cardio (HIIT, brisk walking) 3 - 4 times/week with strength training (squats, push-ups, planks) 3 times/week. \nAdd yoga or stretching daily for recovery.";

    //Different tailored diet plans for each Obesity Class Level.
    string class1Diet = "For Class 1 obesity, focus on a moderate calorie deficit of around 500 kcal/day. Eat lean proteins like chicken or tofu, low-glycemic carbs such as quinoa and sweet potatoes, and healthy fats from sources like olive oil and avocado. Stick to 3 balanced meals with 1-2 snacks. An example meal could be scrambled eggs with spinach for breakfast, grilled chicken salad for lunch, and baked salmon with sweet potato for dinner.";

    string class2Diet = "In Class 2 obesity, create a larger calorie deficit of 600-750 kcal/day. Include lean proteins like fish and beans, low-glycemic carbs like vegetables and fruits, and healthy fats from nuts and avocado. Aim for 3 meals and 1-2 snacks. A typical day might include Greek yogurt with seeds for breakfast, grilled turkey with quinoa for lunch, and grilled chicken with vegetables for dinner.";

    string class3Diet = "For Class 3 obesity, aim for a more aggressive calorie deficit of 750-1000 kcal/day. Focus on lean proteins like fish and tofu, low-calorie veggies, and small portions of healthy fats like olive oil and nuts. Eat 3 meals with 1-2 snacks. Example meals include a smoothie with protein powder for breakfast, grilled fish with roasted vegetables for lunch, and chicken with a salad for dinner.";


    cout<<"Welcome to BMI Calculator!"<<endl;
    cout<<"Enter your height in :-"<<endl;
    
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
    else if (bmi >= 18.5 && bmi < 24.9){
        cout << "You are classified as Normal Weight"<<endl<<"Diet Recommendation:\n"<<balancedDiet<<endl<<"Exercise Recommendation:\n"<<aerobicExercises;
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        cout <<"You are classified as Overweight"<<endl<<"Diet Recommendation:\n"<<calorieControlledDiet<<endl<<"Exercise Recommendation:\n" <<exerciseRoutine;
    }
    else if (bmi >= 30)
    {   
        if(bmi >= 30 && bmi < 34.9){
            cout << "You are classified as Obesity Class 1"<<endl<<"Our Diet recommendation for you is :\n"<<class1Diet;
        }
        else if(bmi >= 35 && bmi < 39.9){
            cout << "You are classified as Obesity Class 2"<<endl<<"Our Diet recommendation for you is :\n"<<class2Diet;
        }
        else if(bmi >= 40){
            cout << "You are classified as Obesity Class 3"<<endl<<"Our Diet recommendation for you is :\n"<<class3Diet;
        }
        cout<<"Exercise Recommendation:\n"<<weightLossExercise<<endl<<"Professional guidance from a healthcare provider or nutritionist is highly advised to ensure safe weight loss and address any potential underlying health concerns.";
    }

    return 0;
}