#include <iostream>
#include <string>
using namespace std;

class Student 
{
    private:
        double marks;
    
    public:
        
        // setter functoin to initialize marks
        void set_marks(double m)
        {
            marks = m;
        } 

        // getter function to return marks
        double get_marks()
        {
            return marks;
        }
};

int main()
{
    Student student1;
    double input;

    // get user input 
    cout << "Enter marks: ";
    cin >> input;

    // call setter function
    student1.set_marks(input);

    // call getter function
    cout << "Marks = " << student1.get_marks();

    return 0; 
}