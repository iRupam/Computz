#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    int i2;
    double d2;
    string s2;
    cin>>i2>>d2;
    getline(cin>>ws,s2);
    cout<<i+i2<<"\n";
    cout<<fixed<<setprecision(1)<<d+d2<<"\n";
    cout<<s+s2<<"\n";
    return 0;
}
