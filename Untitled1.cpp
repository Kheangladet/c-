#include<iostream>
#include<cmath>
using namespace std;

class Rectangle{
    private:
        int length;
        int width;
    
    public:
        void input(){
            cout << "Input length: ";
            cin >> length;
            cout << "Input width: ";
            cin >> width;
        }
        
        // Fixed: area should be length * width, not length + width
        int area(){
            return length * width;
        }
        
        // Fixed: renamed to perimeter for clarity
        int perimeter(){
            return (length + width) * 2;
        }
        
        // Fixed: missing parenthesis in pow(width, 2)
        double diagonal(){
            return sqrt(pow(length, 2) + pow(width, 2));
        }
        
        void output(){
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Area = " << area() << endl;
            cout << "Perimeter = " << perimeter() << endl;
            cout << "Diagonal = " << diagonal() << endl;
        }
};

int main(){
    Rectangle re;
    cout << "===== Input =======" << endl;
    re.input();
    cout << "===== Result ======" << endl;
    re.output();
    return 0;
}