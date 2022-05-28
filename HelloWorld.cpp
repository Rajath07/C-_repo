#include <iostream>
using namespace std;

class Car{
    private:
    int numGears;

    protected:
    int passCapacity;

    public:
    int speed;
    string name;
    int velocity;

    int getVelocity(void);
    int setNumGears(int);
    ~Car();
};

class Convertible:Car{
    public:
    void setPass(int);
    int getPass(void);
};

void Convertible::setPass(int p){
    passCapacity = p;
}

int Convertible::getPass(void){
    return passCapacity;
}

Car::~Car(){
    cout << "Object is ending. Destructor entered" << endl;
}

int Car::getVelocity(void){
    velocity = speed*10;
    return velocity;
}

int Car::setNumGears(int g){
    numGears = g;
    return numGears;

}

int main(){
    Car BMW;
    BMW.speed = 100;
    BMW.name = "M4";
    cout << "Car name is " << BMW.name << endl;
    cout << "Current speed = " << BMW.speed << endl;
    cout << "Velocity = " << BMW.getVelocity() << endl;
    cout << "Number of gears = " << BMW.setNumGears(5) << endl;
    Convertible M3;
    M3.setPass(2);
    cout << "Seating capacity = " << M3.getPass() << endl;


}