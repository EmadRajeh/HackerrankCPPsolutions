#include <bits/stdc++.h>
#include <string>


using namespace std;

class Rectangle{
public:
    int width;
    int height;
public:
    void display(){
        cout << width << " " << height << "\n";
        
    }
    
};

class RectangleArea: public Rectangle {
   public:
    void read_input(){
        cin >> width >> height;
    }
    int getArea() {
         return (width * height);
    }
    void display(){
        cout << width * height << "\n";
    }
};



int main(){
    
  /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
//    cout << "Width: " << r_area.width << line;
//    cout << "Height: " << r_area.height << line;
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
//    cout << "Width: " << r_area.width << line;
//    cout << "Height: " << r_area.height << line;
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
