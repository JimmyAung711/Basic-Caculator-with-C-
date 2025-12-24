#include <iostream>
#include <cmath>

int main(){
          std::cout << "\n";
          char op;
          double num1;
          double num2;
          double result;

          std::cout << "----------Caculator-----------" << "\n";
          std::cout << "Select an operator(+ - * /): ";
          std::cin >> op;

          std::cout << "Select a number for num1: ";
          std::cin >> num1;

          std::cout << "Select a number for num2: ";
          std::cin >> num2;

          switch(op){
                    case '+':
                              result = num1 + num2;
                              std::cout << "Result: " << result << "\n";
                              break;
                    case '-':
                              result = num1 + num2;
                              std::cout << "Result: " << result << "\n";
                              break;
                    case '*':
                              result = num1 + num2;
                              std::cout << "Result: " << result << "\n";
                              break;
                    case '/':
                              result = num1 + num2;
                              std::cout << "Result: " << result << "\n";
                              break;
                    default:
                              std::cout << "That wasn't a valid operator." << "\n";
                              break;
          }
          std::cout << "------------------------------";
          return 0;
}