#ifndef HW1_SERIES_H
#define HW1_SERIES_H
#include "ViewAble.h"

class Series : public ViewAble {
protected:
    int season;
    int episode;

public:
    //ctor's

    Series() {}

    Series(string id, string name, int playRunTime, int season, int episode) : ViewAble(id, name, playRunTime) {
        this->season = season;
        this->episode = episode;
    }

    Series(const Series & series) {
        this->id = series.getId();
        this->name = series.getName();
        this->playRunTime = series.getTime();
        season = series.getSeason();
        episode = series.getEpisode();
    }

    //detor's
    virtual ~Series() {

    }

    //getters
    int getSeason() const {
        return season;
    }

    int getEpisode() const {
        return episode;
    }

    //methods
    //ToDo finish overrided methods 11/04
    string getInfo() override {
        return "series";
    }

    bool play() override {
        return false;
    }
};

#endif //HW1_SERIES_H
