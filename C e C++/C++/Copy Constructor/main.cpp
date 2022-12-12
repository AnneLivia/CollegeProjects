#include <iostream>

using namespace std;

class Entity {
private:
    int x;

public:
  Entity(){}
  Entity(int x) : x(x) {}
  Entity(Entity& c) {
    this->x = c.x;
  }

  int operator ++ (int) {
    return (++(this->x));
  }

  int getX() {return this->x;};

};

 ostream&  operator << (ostream& ostre, Entity& e) {
    ostre << e.getX();
    return ostre;
  }

int main()
{
    Entity x(2);
    Entity y = x;

    x++;
    x++;
    x++;
    cout << x << endl;
    cout << y << endl;
    return 0;
}
