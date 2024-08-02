#include<iostream>

int main(){
    std::cout<<"Hello World!"<<std::endl;
    //basic i/o
    std::cout<<"Enter Your Name :"<<std::endl;
    std::string var;
    std::cin>>var;
    std::cout<<"You are "<<var<<" how are you Doing."<<std::endl;
    std::cout<<"What are you into Like Interestes"<<std::endl;
    std::string newData;
    std::cin.ignore();
    /*
    std::cin >> var: Reads input until it encounters whitespace (like a space or newline). If the user types "John" and presses Enter, "John" is stored in var, but the newline character remains in the input buffer.
    
    std::getline(std::cin, newData): Reads input until it encounters a newline. If there’s a newline character left in the buffer (from the previous std::cin call), std::getline immediately reads this leftover newline as an empty line.
    
    ->Example Scenario
    Consider the following sequence of inputs:
    
    User Input: John (press Enter)
    Buffer State: John is in var, newline is still in the buffer.
    std::getline Call: Reads the newline character left in the buffer and immediately sees it as an end-of-line, resulting in newData being empty.*/
    
    std::getline(std::cin,newData);
    std::cout<<"well Nice choice u like "<<newData<<std::endl;
}
