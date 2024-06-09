#include <iostream>
#include <string>

// class UserManager {
// private:
//     std::string username;
//     std::string password;

// public:
//     UserManager(const std::string& user, const std::string& pass) : username(user), password(pass) {}

//     bool authenticate(const std::string& user, const std::string& pass) {
//         return (username == user && password == pass);
//     }

//     void save() {
//         // Code to save user details to a database
//         std::cout << "Saving user data to the database." << std::endl;
//     }
// };

// int main() {
//     UserManager user("admin", "password123");
//     if (user.authenticate("admin", "password123")) {
//         std::cout << "User authenticated." << std::endl;
//     }
//     user.save();
//     return 0;
// }


// Explanation: UserManager is responsible for both authentication and saving user data. 
// If we need to change how we authenticate or how we save data, we need to modify the same class, which violates SRP.


//*************************************************************************************** */
class Authenticator {
public:
    bool authenticate(const std::string& user, const std::string& pass, const std::string& expectedUser, const std::string& expectedPass) {
        return (user == expectedUser && pass == expectedPass);
    }
};

class UserSaver {
public:
    void save(const std::string& user) {
        // Code to save user details to a database
        std::cout << "Saving " << user << " data to the database." << std::endl;
    }
};

class User {
private:
    std::string username;
    std::string password;
    Authenticator authenticator;
    UserSaver userSaver;

public:
    User(const std::string& user, const std::string& pass) : username(user), password(pass) {}

    bool login(const std::string& user, const std::string& pass) {
        return authenticator.authenticate(user, pass, username, password);
    }

    void save() {
        userSaver.save(username);
    }
};

int main() {
    User user("admin", "password123");
    if (user.login("admin", "password123")) {
        std::cout << "User authenticated." << std::endl;
    }
    user.save();
    return 0;
}


//Explanation: Now, Authenticator handles authentication, and UserSaver handles saving user data.
// User class uses these services, adhering to SRP as each class has a single responsibility.