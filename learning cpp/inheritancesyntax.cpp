#include <iostream>
using namespace std;
class Animal
{
public:
    int animalh, animalcode;
    Animal(int height, int code)
    {
        animalh = height;
        animalcode = code;
    }
    Animal(){}

};
// This is a inheriat class which is from a ---base clas animal
class Mammel : Animal
{
    int legs;

public:
    Mammel(int height, int code, int nooflegs)
    { // this will go to animal constructor because it has the 
    //authority ti modify the code in that
        animalh = height;
        animalcode = code;
        legs = nooflegs;
    }
    void getval(){
        cout << "the height of the bat is " << animalh
         << " and code for this bat is " <<animalcode<<endl;
    }
};
int main()
{
    Animal elephant(8, 1);
    cout << "the height of the animal is " << elephant.animalh
         << " and code for this animal is " << elephant.animalcode<<endl;
    Mammel bat(1, 100, 2);
    bat.getval();

    return 0;
}