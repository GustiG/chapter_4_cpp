#include <iostream>

template <typename T> //A
class Box
{
public:
    Box(const T l, const T w, const T h) //B
        : length(l), width(w), height(h)
    {
    }

    T calculateVolume() const  //C
    {
        return length * width * height;
    }

    void displayDimensions() const  //D
    {
        std::cout << "Box dimensions: " << length << " x " << width << " x " << height << std::endl;
    }

private:
    const T length; //E
    const T width;   //F
    const T height;  //G

};

int main()
{
    Box<int> intBox(4, 5, 6); //H
    intBox.displayDimensions(); //I
    std::cout << "Volume: " << intBox.calculateVolume() << std::endl;  //J

    Box<double> doubleBox(2.5, 3.5, 4.5);  //K
    doubleBox.displayDimensions();
    std::cout << "Volume: " << doubleBox.calculateVolume() << std::endl;   //L

    return 0;
}

/*
#A Template declaration for a class named Box that takes a type parameter T
#B Constructor that takes three parameters of type T for length, width, and height
#C Member function that returns the calculated volume of the box of type T
#D Member function that displays the dimensions of the box
#E Private member variable of type T to store the length
#F Private member variable of type T to store the width
#G Private member variable of type T to store the height
#H Create an instance of Box with integer dimensions
#I Display the dimensions of the integer box
#J Calculate and display the volume of the integer box
#K Create an instance of Box with double dimensions
#L Display the dimensions of the double box

*/