#ifndef HW1_MOVIE_H
#define HW1_MOVIE_H
#include "ViewAble.h"

class Movie : public ViewAble {
protected:
    bool OscarWinner;


public:
    //ctor's
    Movie(string id, string name, int playRunTime, bool OscarWinner) : OscarWinner(OscarWinner) {
        this->id = id;
        this->name = name;
        this->playRunTime = playRunTime;
    }

    Movie(const Movie & movie) {
        this->id = movie.getId();
        this->name = movie.getName();
        this->playRunTime = movie.getTime();
        OscarWinner = movie.isOscarWinner();
    }

    //detor's
    virtual ~Movie() {

    }

    //getters
    bool isOscarWinner() const {
        return OscarWinner;
    }

    //methods
    //ToDo finish overrided methods 11/04
    string getInfo() override {
        return nullptr;
    }

    bool play() override {
        return false;
    }
};

#endif //HW1_MOVIE_H
