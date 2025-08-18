#include <iostream>
#include <algorithm>

void toLower(std::string &str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}

void add(){
    int x,y;

    std::cout << "Which numbers would you like to add?" << std::endl;
    std::cout << "Please put them in one at a time." << std::endl;
    std::cin >> x >> y;
    std::cout << "The sum is: " << x + y << std::endl;

}

void subtract(){
    int x,y;

    std::cout << "Which numbers would you like to subtract?" << std::endl;
    std::cout << "Please put them in one at a time." << std::endl;
    std::cin >> x >> y;

    std::cout << "The subtraction is: " << x - y << std::endl;


}

void multiply(){
    int x,y;

    std::cout << "Which numbers would you like to multiply?" << std::endl;
    std::cout << "Please put them in one at a time." << std::endl;
    std::cin >> x >> y;

    std::cout << "The multiplications is: " << x * y << std::endl;


}

void divide(){
    int x,y;

    std::cout << "Which number would you like to divide?" << std::endl;
    std::cout << "Please put them in one at a time." << std::endl;
    std::cin >> x >> y;

    std::cout << "The division is: " << x/y << std::endl;


}

int main(){
std::string x;

std::cout << "Please enter the type of calculation that you want to do?" << std::endl;
std::cout << "add, subtract,multiply, or divide?";
std::cin >> x;

toLower(x);
if (x == "add" || x == "+"){
    add();
}
else if (x == "subtract" || x == "-"){
    subtract();
}
else if (x == "multiply" || x == "*"){
    multiply();
}
else if (x == "divide" || x == "/"){
    divide();
}
else{
    std::cout << "Invalid operation" << std::endl;
}
    return 0;
}