#include <iostream>
#include <memory>

// class Keyboard {
// public:
//     void type() const {
//         std::cout << "Typing on a keyboard" << std::endl;
//     }
// };

// class Computer {
// private:
//     Keyboard keyboard;

// public:
//     void typeOnKeyboard() const {
//         keyboard.type();
//     }
// };

// int main() {
//     Computer computer;
//     computer.typeOnKeyboard();

//     return 0;
// }

//Explanation: Computer directly depends on the Keyboard class, violating DIP.

class Keyboard {
public:
    virtual void type() const = 0;
};

class MechanicalKeyboard : public Keyboard {
public:
    void type() const override {
        std::cout << "Typing on a mechanical keyboard" << std::endl;
    }
};

class Computer {
private:
    std::shared_ptr<Keyboard> keyboard;

public:
    Computer(std::shared_ptr<Keyboard> kb) : keyboard(kb) {}
    void typeOnKeyboard() const {
        keyboard->type();
    }
};

int main() {
    std::shared_ptr<Keyboard> keyboard = std::make_shared<MechanicalKeyboard>();
    Computer computer(keyboard);
    computer.typeOnKeyboard();

    return 0;
}

// Explanation: The Computer class now depends on the Keyboard interface, 
// and we inject the dependency via constructor injection. 
// This adheres to DIP as Computer does not depend on a concrete implementation of Keyboard.