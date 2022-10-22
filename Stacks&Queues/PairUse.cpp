#include <iostream>
#include <stack>
using namespace std;
#include "PairClass.cpp"

int main()
{
    Pair<Pair<int, int>, int> p1;

    p1.setY(10);

    Pair<int, int> p2;
    p2.setX(11);
    p2.setY(110);

    p1.setX(p2);

    cout << p1.getY() << " " << p1.getX().getX() << " " << p1.getX().getY() << endl;

    /*
    Pair<int> p1;
    p1.setX(10);
    p1.setY(20);

    cout<<"P1 :"<<p1.getX()<<" "<<p1.getY()<<endl;
    Pair<double> p2;
    p2.setX(10.1);
    p2.setY(20.2);
    cout<<"P2 :"<<p2.getX()<<" "<<p2.getY()<<endl;
    */
}
