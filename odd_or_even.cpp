# include <iostream>

// This function gets input from the user

int get_input() {
    int num;
    
    std::cout << "Enter a number " << std::endl;
    std::cin >> num ;
    return num;
}


int main() {
    
   int value;
   
   value = get_input();
   
   if (value % 2 == 0) {
       std::cout << value << " is an even number" << std::endl;
   }
   
   else {
       std::cout << value << " is an odd number" << std::endl;
   }
   
   return 0;
}