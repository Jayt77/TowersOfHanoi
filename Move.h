#ifndef MOVE_H
#define MOVE_H

#include <stack>
#include <iostream>
#include <QLabel>
using namespace std;

struct Move{
    int source;
    int destination;

    Move(int s, int d){
        source = s;
        destination = d;
    }
};

#endif // MOVE_H
