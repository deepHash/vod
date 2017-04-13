#ifndef HW1_MOVIE_H
#define HW1_MOVIE_H

#include "ViewAble.h"

class Movie : public ViewAble {
protected:
    bool OscarWinner;


public:
    //ctor's
    Movie(bool OscarWinner) : OscarWinner(OscarWinner) {}

    //detor's
    virtual ~Movie() {

    }

    //ToDo finish overrided methods 11/04
    string getInfo() override {
        return nullptr;
    }

    bool play() override {
        return false;
    }
};

#endif //HW1_MOVIE_H
