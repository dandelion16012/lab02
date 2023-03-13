#include <iostream>
#include <string>

/**
 * main
 * @brief reads username from standart input stream, writes greetings message
 * to standart output stream
 * @returns 0 if no error occures
 */
<<<<<<< HEAD
int main(){
    std::string name;
    std::cin>>name;
    // Read name from standart input stream
    std::cout<<"Hello world from "<<name<<std::endl; 
    // Write greeting string
    return 0;
=======
int
main()
{
  std::string name;
  std::cin >> name; // Read name from standart input stream
  std::cout << "Hello world from " << name
            << std::endl; // Write greeting string
  return 0;
>>>>>>> a4b02a7 (add clang-format and format files using it)
}
