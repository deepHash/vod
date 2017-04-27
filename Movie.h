#ifndef HW1_MOVIE_H
#define HW1_MOVIE_H
#include "ViewAble.h"

class Movie : public ViewAble {
protected:
    bool oscarWinner;


public:
    //ctor's

    Movie() {}

    Movie(string id, string name, int playRunTime, bool oscarWinner) : ViewAble(id, name, playRunTime) {
        this->oscarWinner = oscarWinner;
    }

    Movie(const Movie & movie) {
        this->id = movie.getId();
        this->name = movie.getName();
        this->playRunTime = movie.getTime();
        oscarWinner = movie.isOscarWinner();
    }

    //detor's
    virtual ~Movie() {

    }

    //getters
    bool isOscarWinner() const {
        return oscarWinner;
    }

    //methods
    //ToDo finish overrided methods 11/04
    string getInfo() override {
        return "movie";
    }

    bool play() override {
        return false;
    }
};

#endif //HW1_MOVIE_H
