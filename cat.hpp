 #include <iostream>

 

 class Cat

 {

 public:

     Cat (int initialAge);

     ~Cat();

     int GetAge() { return itsAge;}             // inline!

     void SetAge (int age) { itsAge = age;}     // inline!

     void Meow() { std::cout << "Meow.\n";}     // inline!

 private:

     int itsAge;

 };

