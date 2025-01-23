/*
* Name: Nate O'Brien
* Date: 1/22/2025
* Program: Array Lab
* Extra: gets the number of people with A's for problem 4
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // set random seed
    srand(time(NULL));

    // problem 1

    // declare empty array
    int randoms[10] {};

    cout << "Regular order: ";
    // put 10 random numbers in array
    for (int i = 0; i < sizeof(randoms) / sizeof(int); i++) {
        randoms[i] = rand() % 10 + 1;
        // also take advantage to print the array, less for loops
        cout << randoms[i] << " ";
    }

    // goes through array from index 9-0, printing it in reverse
    cout << "\nReverse order: ";
    for (int i = sizeof(randoms) / sizeof(int) - 1; i >= 0; i--) {
        cout << randoms[i] << " ";
    }

    // problem 2

    int day = 1; // uses 1 to not cause an index error if they skip the input
    // declare array of numbers
    int prices[7] = {42, 565, 23, 12, 99, 1000, 1};

    //gets day input
    cout << "\nEnter a day (Monday=1, Tuesday=2...): ";
    cin >> day;
    //prints out the day's price, getting the index by subtracting 1 from the input
    cout << "Price on day " << day << ": $" << prices[day - 1] << endl;

    //problem 3
    int ages[20] {}; // declare array
    int cnt = 0;
    for (int i = 0; i < sizeof(ages) / sizeof(int); i++) {
        int age;
        //gets input
        cout << "Enter age " << i + 1 << ": ";
        cin >> age;

        ages[i] = age; // puts age in array
        // adds 1 to count if age is greater than 15, otherwise 0
        age > 15 ? cnt++ : 0;
    }

    // prints out number of people older than 15
    cout << "Number older than 15: " << cnt << endl;

    //problem 4

    double finalGrade[5] = {85.8, 93.7, 88.5, 100, 91.3};
    double sum = 0;
    int aScores = 0;
    //iterates through, adding to sum
    for (int i = 0; i < sizeof(finalGrade) / sizeof(double); i++) {
        sum += finalGrade[i];
        finalGrade[i] >= 90 ? aScores++ : 0; // EXTRA: count number of people with A's
    }

    //prints average using printf for rounding
    printf("Average: %.2f\nNumber of A's: %d", sum / (sizeof(finalGrade) / sizeof(double)), aScores);

    return 0;
}
