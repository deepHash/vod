#ifndef HW1_SERIES_H
#define HW1_SERIES_H

#include "ViewAble.h"

class Series : virtual public ViewAble {
protected:
    int season;
    int episode;

public:
    //ctor's
    Series() : season(season), episode(episode) {}

    //detor's
    virtual ~Series() {

    }

    //ToDo finish overrided methods 11/04
    string getInfo() override {
        return season+" "+episode;
    }

    bool play() override {
        return false;
    }
};

#endif //HW1_SERIES_H
