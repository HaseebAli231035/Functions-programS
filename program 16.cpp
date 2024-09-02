#include <iostream>
using namespace std;
char findGrade(int marks)
 {
     if (marks >= 90)
 {
        return 'A';
 } 
    else if (marks >= 80) 
{
        return 'B';
 } 
    else if (marks >= 70) 
 {
        return 'C';
 } 
    else if (marks >= 60)
 {
        return 'D';
 } 
    else if (marks >= 50)
 {
        return 'E';
 } 
     else
 {
        return 'F'; 
 }
}
    int main() 
{
    int marks;
        cout << "Enter the marks (0-100): " << endl;
         cin >> marks;
         char grade = findGrade(marks);
         cout << "The grade is: " << grade << endl;
        cout<< "My name is Haseeb Ali" << endl;
        cout<< "Roll number :231035 " << endl;
    return 0;
}
