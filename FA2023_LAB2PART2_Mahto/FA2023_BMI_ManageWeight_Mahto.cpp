//FA2023_BMI_ManageWeight_Mahto.cpp
#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;
int main()
{

    string name;
    float height;
    float BMI;
    float expectedWeight;//declares the required variables

    cout << "Enter Your Name" << endl;
    getline(cin, name);//gets input from the user for full name
    cout << "Enter Your Height" << endl;
    cin >> height;//gets input of user's height
    cout << "Enter your BMI" << endl;
    cin >> BMI;
    expectedWeight = BMI * (height * height) / 703;//Calculates the expected weight

    cout << "--------------------------------------------------------------------------" << endl;
    cout << "FA2023_BMI_ManageWeight_Mahto.cpp" << endl;
    cout << "Fall 2023 Semester - 08/28/2023 - Abhash Mahto" << endl;
    cout << left << setw(10) << "Standard BMI :" << right << setw(50) << "18.5 - 24.9" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << left << setw(10) << "Name :" << right << setw(54) << name << endl;//used to align the output
    cout << left << setw(10) << "Height(inches) :" << right << setw(48) << height << endl;
    cout << fixed << setprecision(2);//sets the decimal value to 2
    cout << left << setw(10) << "Expected BMI :" << right << setw(50) << BMI  << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << left << setw(10) << "Your expected weight(pounds) should be :" << right << setw(24) << expectedWeight << endl;




    return 0;
}