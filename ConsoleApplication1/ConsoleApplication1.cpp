// ConsoleApplication1.cpp 

#include <iostream>
#include <string>
#include <vector>

class Player
{
public:
    int xp;
    int hp;
    std::vector<float> position;
    //void setName(std::string Getname) { //alternative 1 to ask for player name
    //    name = Getname;
    //}
    //Player(std::string Getname) { //alternative 2 to ask for player name
    //    name = Getname;
    //}

    Player() {

    }

    Player(std::string Name, int Xp, int Hp) { 
        xp = Xp;
        hp = Hp;
        name = Name;
    }

    void setName(std::string Name) {
        name = Name;
        //this->name = Name; //Alternative 2
        //Player::name = Name; //Alternative 3
    }

    void DisplayMessage(std::string msg) {
        std::cout << this->name << " says: " << msg << std::endl;
    }

    ~Player() {

    }

    bool friendly = true;
protected:
    std::string name;
};

class Enemy : public Player
{
    bool friendly = false;
public:
    Enemy() {

    }

    ~Enemy() {

    }

};

int main()
{

    Player p3("Roger", 25, 100);
    p3.DisplayMessage("Hi, how are you doing? ");

    Enemy enemy;
}
