#include <iostream>
#include <vector>
#include <memory>

// enum ShapeType {
//     CIRCLE,
//     RECTANGLE
// };

// class Shape {
// public:
//     ShapeType type;
//     double radius; // For circles
//     double width, height; // For rectangles
// };

// class AreaCalculator {
// public:
//     double calculateArea(const std::vector<Shape>& shapes) {
//         double totalArea = 0;
//         for (const auto& shape : shapes) {
//             if (shape.type == CIRCLE) {
//                 totalArea += 3.14 * shape.radius * shape.radius;
//             } else if (shape.type == RECTANGLE) {
//                 totalArea += shape.width * shape.height;
//             }
//         }
//         return totalArea;
//     }
// };

// int main() {
//     std::vector<Shape> shapes = { {CIRCLE, 5, 0, 0}, {RECTANGLE, 0, 4, 6} };
//     AreaCalculator calculator;
//     std::cout << "Total Area: " << calculator.calculateArea(shapes) << std::endl;
//     return 0;
// }

//Explanation: If you want to add a new shape, such as a triangle, you must modify the AreaCalculator class to handle the new shape. 
//This violates the Open/Closed Principle because you are modifying the existing class.



class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

class AreaCalculator {
public:
    double calculateArea(const std::vector<std::shared_ptr<Shape>>& shapes) {
        double totalArea = 0;
        for (const auto& shape : shapes) {
            totalArea += shape->area();
        }
        return totalArea;
    }
};

int main() {
    std::vector<std::shared_ptr<Shape>> shapes;
    shapes.push_back(std::make_shared<Circle>(5));
    shapes.push_back(std::make_shared<Rectangle>(4, 6));

    AreaCalculator calculator;
    std::cout << "Total Area: " << calculator.calculateArea(shapes) << std::endl;
    return 0;
}

//Explanation: In this example, the AreaCalculator class is not modified when a new shape type is added.
// Instead, you can create a new shape class that extends the Shape interface and implement the area() method. 
//This follows the Open/Closed Principle because the system is open for extension (by adding new shape classes) but 
//closed for modification (the AreaCalculator class does not need to change).