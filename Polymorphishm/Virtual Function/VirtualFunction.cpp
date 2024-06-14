#include <iostream>

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Square" << std::endl;
    }
};

int main() {
    Shape* shapes[] = { new Circle(), new Square() };

    for (Shape* shape : shapes) {
        shape->draw(); // Calls Circle::draw and Square::draw
    }

    // Cleanup
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
