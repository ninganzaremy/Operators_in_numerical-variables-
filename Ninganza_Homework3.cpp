/*NInganza_Homework3.cpp:Operators in numerical variables
 Created by Remy Ninganza on 2/16/20. Copyright © 2020 Remy Ninganza. All rights reserved.*/


#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
     //Step 1) Declare variables: randNum, max_number, min_number as integer
    int randNum, max_number, min_number;
    //Step 2) Ask the user to enter a maximum number of the range
    cout<<"Enter  the maximum number of a range: ";

        //Step 3) Collect a number from the user and store the value in variable max_number
    cin>>max_number;

        //Step 4) Ask the user to enter a minimum number of the range
    cout<<"Enter  the minimum number of a range: ";

    //Step 5) Collect a number from the user and store the value in variable min_number
    cin>>min_number;

    //Step 6) Randomly generate a number between the min_number and the max_number. Save this random number in randNum
    randNum = (rand() % ((max_number + 1) - min_number)) + min_number;

    //Step 7) Display the random number
    cout<<"The random number is: "<<randNum<<endl;
    cout<<endl;

    //Step 8) Check if the random number is greater than or equal to 20 AND less than 100. Display result Step
    cout<< "Is the random number "<<randNum<<" greater and equal to 20 and less and equal to 100?: "<<(randNum >= 20 && randNum < 100)<<endl;
    cout<<endl;

    //Step 9) Shift the random number to the left by 6 bits. Display result
    int left_shifted =randNum<<6;

    cout<<"The number: "<<randNum<<" shifted to the left by 6 bits: "<<left_shifted <<endl;

    //Step 10) Shift the random number to the right by 4 bits. Display result
    int right_shifted =randNum>>4;
    cout<<"The number: "<<randNum<<" shifted to the right by 4 bits: "<<right_shifted <<endl;
    cout<<endl;

    return 0;
}
