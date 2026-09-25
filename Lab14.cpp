/*
Create a Color class that has as its private member variables three integers 
    representing the red, green, and blue values of that color.

Code normal setter & getter member functions. 
    Also code a member print() method to print the object data.

In main(), create several Color objects, populate them with data, and 
    output their values to the console in neatly-formatted output using the object's print() method.

Commit your code every ten minutes while working. Set a timer.
*/

//Eduardo Avila
//COMSC - 210 - 5293
//Lab 14 - Color Class

#include <iostream>
using namespace std;

//Color class
class Color {

private:
    int red;
    int green;
    int blue;

public: 
    //Setters and Getters
    int getRed()        { return red; }
    void setRed(int r)  { red = r; }

    int getGreen()        { return green; }
    void setGreen(int g)  { green = g; }

    int getBlue()        { return blue; }
    void setBlue(int b)  { blue = b; }

    //Print function for output
    void print(){
        cout << "Red Value: " << red << endl;
        cout << "Green Value: " << green << endl;
        cout << "Blue Value: " << blue << "\n" << endl;
        cout << "---------------\n" << endl;
    }
};


int main(){

    //Create colors and put random data in them
    Color color1;

    color1.setRed(100);
    color1.setGreen(20);
    color1.setBlue(0);

    color1.print();


    return 0;
}