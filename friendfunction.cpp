#include <iostream>
using namespace std;

class Square; 

class Rectangle {
private:
    int length;
public:
    void setLength(int l) {
        length = l;
    }
    friend int multiplyDimensions(Rectangle, Square);
};

class Square {
private:
    int side;
public:
    void setSide(int s) {
        side = s;
    }
    friend int multiplyDimensions(Rectangle, Square);
};

int multiplyDimensions(Rectangle r, Square s) {
    return r.length * s.side;
}

int main() {
    Rectangle rect;
    Square sq;

    rect.setLength(5);  // set rectangle length to 5
    sq.setSide(4);      // set square side to 4

    cout << "Result of multiplication: " << multiplyDimensions(rect, sq) << endl;
    return 0;
}
