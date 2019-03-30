/*
 * Author: Suki Sahota
 * Description: Body Mass Index Calculator
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

float weightInKg(float & w) {
    w = 0.453592 * w;
    return w;
}

float heightInM(float & h) {
    h = 0.0254 * h;
    return h;
}

float bodyMassIndex(float & w, float & h) {
    float bmi;
    bmi = w / (h * h);
    return bmi;
}

int main()
{
    cout << "\nHello, and welcome to the Body Mass Index Calculator!\n" << endl;
    
    cout << "How many times would you like to run the BMI application today? ";
    int rounds;
    cin >> rounds;

    cout << endl;
    cout << rounds << " time(s)! Very well. Now let's get started!\n" << endl;

    for (int i = 0; i < rounds; i++) {
        cout << "May I please have the name of person " << i + 1 << " who will be using the application: ";
        string name;
        cin >> name;

        cout << "Thank you " << name << "! And how much do you weigh in pounds? ";
        float weight;
        cin >> weight;
        weight = weightInKg(weight);
        cout << "Thanks for that. Your weight is " << weight << " in kilograms." << endl;

        cout << endl;
        cout << "And what is your height in inches? ";
        float height;
        cin >> height;
        height = heightInM(height);
        cout << "Thank you again. Your height is " << height << " in meters." << endl;

        cout << "Your Body Mass Index is your weight divided by your height squared. A BMI under 18.5 is considered underweight, while a BMI above 25 is considered overweight.\n" << endl;
        cout << "\nNow lets calculate your Body Mass Index . . . \n" << endl;

        float bmi = bodyMassIndex(weight, height);
        cout << name << ", your BMI is " << bmi << ".";

        if (bmi <= 18.5) {
            cout << " Danger: You are considered underweight!" << endl;
        } else if (bmi > 25) {
            cout << " Danger: You are considered overweight!" << endl;
        }

        cout << "\n" << endl;
        
    }

    cout << "Thank you for using the Body Mass Index Calculator. Remember that the best diet is a healthy exercise regimen, and the best exercise is a healthy lifestyle. Goodbye now." << endl;

    return 0;
}
