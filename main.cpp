#include <iostream>

struct User {
    std::string name;
    std::string last_name;
    int age;
    std::string full_name = name + " " + last_name;
    void get_full_name(){
        std::cout << "Full name: " << full_name << std::endl;
    };
};

int main() {
    User user;
    user.name = "John";
    user.last_name = "Doe";

    std::cout << "First name: " << user.name << std::endl;

    User gym[20];
    gym[0].name = "Bischelo";
    gym[0].last_name ="Boscayolo";

    std::cout << "The gym's first customer is: " << gym[0].name << " " <<
                gym[0].last_name << std::endl;

    User* gym_guy_ptr = &gym[0];
    (*gym_guy_ptr).get_full_name();
    gym[0].get_full_name();



    User user2 = {"Discepolo", "Diddo", 102};
    User* user2_ptr = &user2;

    user2.get_full_name();
    user2_ptr->get_full_name();
    return 0;
}
