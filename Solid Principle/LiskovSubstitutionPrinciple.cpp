#include <iostream>
#include <string>

// class Bird {
// public:
//     virtual void fly() const {
//         std::cout << "Flying" << std::endl;
//     }
// };

// class Sparrow : public Bird {
// public:
//     void fly() const override {
//         std::cout << "Sparrow flying" << std::endl;
//     }
// };

// class Ostrich : public Bird {
// public:
//     void fly() const override {
//         throw std::runtime_error("Ostrich can't fly");
//     }
// };

// void makeBirdFly(const Bird& bird) {
//     bird.fly();
// }

// int main() {
//     Sparrow sparrow;
//     Ostrich ostrich;

//     makeBirdFly(sparrow);  // Works fine
//     try {
//         makeBirdFly(ostrich);  // Throws an error
//     } catch (const std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }

//     return 0;
// }
 
 //Explanation: Substituting Ostrich for Bird in makeBirdFly causes a runtime error, violating LSP.


class Bird {
public:
    virtual void makeSound() const = 0;
};

class FlyingBird : public Bird {
public:
    virtual void fly() const = 0;
};

class Sparrow : public FlyingBird {
public:
    void makeSound() const override {
        std::cout << "Chirp chirp" << std::endl;
    }

    void fly() const override {
        std::cout << "Sparrow flying" << std::endl;
    }
};

class Ostrich : public Bird {
public:
    void makeSound() const override {
        std::cout << "Boom boom" << std::endl;
    }
};

void makeBirdSound(const Bird& bird) {
    bird.makeSound();
}

int main() {
    Sparrow sparrow;
    Ostrich ostrich;

    makeBirdSound(sparrow);  // Works fine
    makeBirdSound(ostrich);  // Works fine

    return 0;
}

//Explanation: By separating Bird into FlyingBird and Bird with makeSound, 
//we ensure that non-flying birds like Ostrich can be used without violating LSP.
