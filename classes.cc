#include <iostream>
class PrintHello , World {
public:
  PrintHello(){
    std::cout << "Hello , World";
  }
};

int main(){
  PrintHello ph();
  return 0;
}
