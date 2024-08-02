#include<iostream>
int GlobalNumber = 10;
int main(){
    int LocalNumber = 20;
    std::string Name,Role;
    int Age;
    float Salary;
    bool IsReal;
    system("clear");
    std::cout<<"Enter Age :";
    std::cin>>Age;
    std::cin.ignore();
    std::cout<<"Enter Your Name :";
    std::getline(std::cin,Name);
    std::cout<<"Enter your role :";
    IsReal = true;
    std::getline(std::cin,Role);

    std::cout<<"Hello "<<Name<<" you are "<<Age<<" old and also a "<<Role<<std::endl;
    std::cout<<"Global Value : "<<GlobalNumber<<" Local Value :"<<LocalNumber<<"is a real one"<<bool(IsReal)<<std::endl;
}