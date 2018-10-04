//Rachel Shpringer
//CS20A
//Programming Project #1
//Problem #2: Animals
//Due: September 19, 2018


#include <iostream>
#include <string>

using namespace std;


//CREATING CLASSES AND SUBCLASSES

class Animal {
public:
    Animal();
    ~Animal();
   };


class Zebra : public Animal {
public:
    void getBio(string xname, int xage, string xplace);
    string getName();
    int getAge();
    string getPlace();
    void setName(string xname);
    void setAge(int xage);
    void setBirth(string xplace);
private:
    int age;
    string name, place;
};

class Dolphin : public Animal {
public:
    void getBio(string xname, int xage, string xplace);
    string getName();
    int getAge();
    string getPlace();
   void setName(string xname);
    void setAge(int xage);
    void setBirth(string xplace);
private:
    int age;
    string name, place;
};



// MAIN FUNCTION

int main() {
    
    string name, place;
    int age;
 
    cout << "What is Zebra's name? ";
    cin >> name;
    cout << endl;
    cout << "How many years old is " << name << ": ";
    cin >> age;
    cout << endl;
    
    Zebra zebra1;
    zebra1.setAge(age);
    zebra1.setName(name);
    zebra1.setBirth("Africa");

    
    cout << "What is Dolphin's name? ";
    cin >> name;
    cout << endl;
    cout << "How many years old is " << name << ": ";
    cin >> age;
    cout << endl;
    
    Dolphin dolphin1;
    dolphin1.setAge(age);
    dolphin1.setName(name);
    dolphin1.setBirth("the Ocean");

    name = zebra1.getName();
    age = zebra1.getAge();
    place = zebra1.getPlace();

    cout << "Zebra's name is " << name << ", it is " << age << " years old, and it was born in " << place << endl;

    name = dolphin1.getName();
    age = dolphin1.getAge();
    place = dolphin1.getPlace();

    cout << "Dolphin's name is " << name << ", it is " << age << " years old, and it was born in " << place << endl;

    return 0;
    
}


//CONTSTRUCTORS AND GET/SET FUNCTIONS FOR SHAPE
Animal::Animal() {
}
Animal::~Animal() {
}



//CONTSTRUCTORS AND GET/SET FUNCTIONS

void Zebra::getBio(string xname, int xage, string xplace) {
    xname = name;
    xage = age;
    xplace = place;
}

string Zebra::getName() {
    return name;
}

int Zebra::getAge() {
    return age;
}

string Zebra::getPlace() {
    return place;
}

void Zebra::setName(string xname) {
    name = xname;
}

void Zebra::setAge(int xage) {
    age = xage;
}

void Zebra::setBirth(string xplace) {
    place = xplace;
}


void Dolphin::getBio(string xname, int xage, string xplace) {
    xname = name;
    xage = age;
    xplace = place;
}

string Dolphin::getName() {
    return name;
}

int Dolphin::getAge() {
    return age;
}

string Dolphin::getPlace() {
    return place;
}

void Dolphin::setName(string xname) {
     name = xname;
}

void Dolphin::setAge(int xage) {
    age = xage;
}

void Dolphin::setBirth(string xplace) {
    place = xplace;
}
