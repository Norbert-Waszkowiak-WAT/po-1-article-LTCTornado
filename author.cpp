#include<iostream>
#include <string>

using namespace std;

class Author{
private:
    string name;
    string surname;
public:
    Author(string name, string surname): name(name), surname(surname){};
    Author(){};
    void print(){
        cout << name << " ";
        cout << surname << endl;
    }
    string toString(){
        return name +" "+ surname;
    }
    string getName(){
        return name;
    }
    string getSurname(){
        return surname;
    }


};
