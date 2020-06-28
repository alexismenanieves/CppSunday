#include<iostream>
#include<string>

class Student{
    int id;
    int gradDate;
    std::string name;
public:
    void setId(int idIn);
    void setName(std::string nameIn);
    void setGradDate(int gradDateIn);
    int getId();
    std::string getName();
    int getGradDate();
};

void Student::setId(int idIn){
    id = idIn;
}

void Student::setName(std::string nameIn){
    name = nameIn;
}

void Student::setGradDate(int gradDateIn){
    gradDate = gradDateIn;
}

int Student::getId(){
    return id;
}

std::string Student::getName(){
    return name;
}

int Student::getGradDate(){
    return gradDate;
}

int main(){
    Student student1;
    student1.setId(54345);
    student1.setName("Pipo Perez");
    student1.setGradDate(2017);
    std::cout<< "El id es: " << student1.getId() << "\n";
    std::cout<< "El nombre es: " << student1.getName() << "\n";
    std::cout<< "La fecha de graduación es: " << student1.getGradDate() << "\n";
    return 0;
}
