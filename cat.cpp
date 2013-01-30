#include "cat.hpp"  // include the header files!

Cat::Cat(int initialAge)   //constructor
{
    itsAge = initialAge;
}

Cat::~Cat()             //destructor, takes no action
{
}

// Create a cat, set its age, have it
// meow, tell us its age, then meow again.
int main()
{
    Cat Frisky(5);
    Frisky.Meow();
    std::cout << "Frisky is a cat who is " ;
    std::cout << Frisky.GetAge() << " years old.\n";
    Frisky.Meow();
    Frisky.SetAge(7);
    std::cout << "Now Frisky is " ;
    std::cout << Frisky.GetAge() << " years old.\n";
    //system("PAUSE");
   // return 0;
   
   Cat Spot(5);
   Spot.Meow();
   std::cout << "Spot is a cat who is ";
   std::cout << Spot.GetAge() << " years old.\n";
   Spot.Meow();
   Spot.SetAge(7);
   std::cout << "Now Spot is " ;
   std::cout << Spot.GetAge() << " years old.\n";
   system("PAUSE");
   return 0;
   
}
