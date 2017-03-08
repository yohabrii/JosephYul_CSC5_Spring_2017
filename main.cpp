/* 
 * File:   main.cpp
 * Author: Yul Joseph 
 * Created on March 7, 2017, 11:32 AM
 * Purpose: Calorie Consumption per Candy Bar Calculation  
 *           
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char sex;                        //Male  or Female
    unsigned short ht,wt,age;        //Height (in.), Weight(lbs.), Age
    unsigned char cdyCals=230;       //Calories per candy bar
    float bmr;                       //Basal Metabolic Rate 
    int nCdyBrs;                     //Number of Candy Bars
    
    //Initialize variables
    
    //Input data
    cout<<"This program calculates the number of candy bars allowed per "
           "day based upon your BMR."<<endl;
    cout<<"Type in your Sex(M/F), Wt(lbs), Ht(in), Age(yrs). "<<endl;
    cout<<"Inputs are integer based. "<<endl;
    cin>>sex>>wt>>ht>>age;
    
    //Map inputs to outputs or process the data
    bmr=(sex=='M')?
        66 + 6.3f * wt + 12.9f * ht - 6.8f * age:
        655 + 4.3 * wt + 4.7 * ht - 4.7f * age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    
    //Output the transformed data
    cout<<"The number of candy bars you can eat  = "<<nCdyBrs<<endl;
    
    //Exit stage right!
    return 0;
}