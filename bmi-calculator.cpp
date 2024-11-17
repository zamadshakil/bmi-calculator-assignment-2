#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double heightFeets, heightInches, heightMeters, weight;
    cout << "Welcome to the BMI Calculator!" << endl;
    //Strings to be displayed to the person of Underweight Category.
    string highCalorieDiet = "Focus on a high-calorie diet rich in nutrient-dense foods. Include protein sources like eggs, lean meats, and full-fat dairy to build muscle. Incorporate healthy fats such as avocados, nuts, seeds, and olive oil for extra calories. Choose carbohydrate-rich foods like rice, pasta, whole grains, and potatoes to boost energy levels. Snack frequently on calorie-dense options like dried fruits, nut butters, and smoothies enriched with protein powder or full-fat milk. Aim for 5-6 smaller meals a day, ensuring you also include fruits and vegetables for balanced nutrition.";
    string weightGainExercises = "Focus on strength-training exercises that build muscle. Incorporate weightlifting with compound movements like squats, deadlifts, and bench presses, along with bodyweight exercises such as push-ups and pull-ups. Use gym machines for targeted muscle work and include core exercises like planks and crunches. Train 3-4 times a week, progressively increasing weights or intensity, and avoid excessive cardio to conserve calories for muscle growth.";

    //Strings to be displayed to the person of Normal Weight Category.
    string balancedDiet  = "Focus on a balanced diet for maintaining normal weight includes lean proteins like chicken, fish, and legumes; whole grains such as brown rice and oats; and healthy fats from avocados, nuts, and olive oil. Fill half your plate with colorful fruits and vegetables for essential nutrients and fiber, and include dairy or fortified alternatives for calcium and vitamin D. Stay hydrated with water, limit sugary drinks, and enjoy occasional treats in moderation to sustain a healthy lifestyle.";
    string aerobicExercises = "Focus on a regular aerobic exercises like brisk walking, jogging, cycling, or swimming for 30-60 minutes most days of the week help maintain cardiovascular health and overall fitness. Combine this with strength training exercises, such as weightlifting or resistance bands, twice a week to build muscle and bone strength. Additionally, include flexibility activities like yoga or stretching to improve mobility and reduce stress. Aim for at least 150 minutes of moderate-intensity activity per week for optimal health.";

    //Strings to be displayed to the person of Overweiht Category.
    string calorieControlledDiet = "A calorie-controlled diet for an overweight person should focus on lean proteins like fish, chicken, and legumes, along with high-fiber whole grains such as oats and brown rice. Fill half your plate with non-starchy vegetables and include moderate portions of fruits. Use healthy fats like olive oil and nuts in small amounts, and limit processed foods, sugary drinks, and desserts. Practice portion control and drink plenty of water to stay hydrated. Reducing daily calorie intake by 500-750 calories, combined with regular exercise, can help achieve sustainable weight loss.";
    string exerciseRoutine = "For an overweight person, a combination of cardio and strength training is ideal for fitness. Start with low-impact cardio like brisk walking or cycling for 30-40 minutes, 3-5 times a week. Add strength training 2-3 times a week, focusing on bodyweight exercises like squats, lunges, and push-ups to build muscle. Incorporate HIIT once or twice a week with short bursts of intense cardio followed by recovery periods. This mix helps burn fat, build muscle, and improve overall health. Start slow and increase intensity over time as fitness improves.";

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

    //BMI Classification and Health Recommendation:
    if (bmi < 18.5){
        cout << "\nYou are classified as Underweight"<<endl<<"Diet Recommendation:\n"<<highCalorieDiet<<endl<<"Exercise Recommendation:\n"<<weightGainExercises<<endl;
    } 
    else if (bmi >= 18.5 && bmi < 24.9){
        cout << "You are classified as Normal Weight"<<endl<<"Diet Recommendation:\n"<<balancedDiet<<endl<<"Exercise Recommendation:\n"<<aerobicExercises<<endl;
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        cout <<"You are classified as Overweight"<<endl<<"Diet Recommendation:\n"<<calorieControlledDiet<<endl<<"Exercise Recommendation:\n" <<exerciseRoutine<<endl;
    }
    else if (bmi >= 30)
    {   
        if(bmi >= 30 && bmi < 34.9){
            cout << "You are classified as Obesity Class 1"<<endl<<"Our Diet recommendation for you is :\n"<<class1Diet<<endl;
        }
        else if(bmi >= 35 && bmi < 39.9){
            cout << "You are classified as Obesity Class 2"<<endl<<"Our Diet recommendation for you is :\n"<<class2Diet<<endl;
        }
        else if(bmi >= 40){
            cout << "You are classified as Obesity Class 3"<<endl<<"Our Diet recommendation for you is :\n"<<class3Diet<<endl;
        }
        cout<<"Exercise Recommendation:\n"<<weightLossExercise<<endl<<"Professional guidance from a healthcare provider or nutritionist is highly advised to ensure safe weight loss and address any potential underlying health concerns.";
    }

    return 0;
}