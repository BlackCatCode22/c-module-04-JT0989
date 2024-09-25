#include <iostream>
#include <list>

using namespace std;


class Animal

{

    // Create constructors for our class.
public:
    Animal(string aName) {
        this->name = aName;
        this->origin = "someplace faraway";
    }

    Animal()
    {
        age = 0;
        sex = "unknown";
        weight = 0;
        birthDate = "unknown";
        color = "unknown";
        name = "toBeNamed";
        origin = "someWhere";

    }



    int age;
    string sex;
    int weight;
    string color;
    string name;
    string origin;
    string birthDate;
};

class Hyena: public Animal {
    // Create a constructor that uses the super class's constructor
    public:
    Hyena(string someName) : Animal(someName) {



    }
    Hyena() : Animal() {}
};


int main() {
    cout << "Welcome to my Zoo program" << endl;

    // Create a NEW animal object
    // the new keyword allocates memory on the heap and returns the address of the object
    Animal* myAnimal = new Animal();


    myAnimal->age = 10;
    myAnimal->color = "red ";
    myAnimal->name = "John";
    myAnimal->sex = "male";
    myAnimal->weight = 20;
    myAnimal->birthDate = "2021";

    cout << "\n this is my animal object (created with 'new'\n ";

    cout << "age: " << myAnimal->age << " color: " << myAnimal->color << "birthdate :" << myAnimal->birthDate << endl;

    // Create another animal without using a pointer and new
    Animal anotherAnimal;


    anotherAnimal.age = 30;
    anotherAnimal.color = "blue ";
    anotherAnimal.name = "Timmy ";
    anotherAnimal.birthDate = "2019";

    cout << "\n this is another animal object\n ";

    cout << "age: " << anotherAnimal.age << " color: " << anotherAnimal.color << "birthdate :" << anotherAnimal.birthDate << endl;

    // Create an animal with a name.

    Animal* animalWithAName = new Animal("Leo");
    cout << "\n this is my animal with a name ""\n ";
    cout << "name : " << animalWithAName->name << "\n" << endl;


    //Create an animal with the default constructor
    Animal* animalWithDefaultConstructor = new Animal();

    cout << "\n this is my animal with a default constructor\n ";
    cout << "age : " << animalWithDefaultConstructor->age << "\n name: " << animalWithDefaultConstructor->name << endl;



    // Create a hyena
    Hyena* myNewHyena = new Hyena("Zig");
    cout << "\n this is my Hyena\n ";
    cout << "origin: " << myNewHyena->origin << " name: " << myNewHyena->name << endl;



    Hyena* myNewHyena2 = new Hyena();
    cout << "\n this is my Hyena2\n ";
    cout << "name: " << myNewHyena2->name << "\n" << endl;





    return 0;
}
