#ifndef HW1_PLAYERSERVICE_H
#define HW1_PLAYERSERVICE_H
#include "ViewAble.h"
#include "Series.h"
#include "Movie.h"

class PlayerService {
private:
    vector<ViewAble> database;
    int requests;

public:
    //c'tors
    PlayerService();
    PlayerService(const PlayerService&);

    //de'tors
    virtual ~PlayerService();

    //methods
    SmartPtr<ViewAble> requestsViewable(string id);
    void addSeries(SmartPtr<Series>);
    void addMovies(SmartPtr<Movie>);



};

#endif //HW1_PLAYERSERVICE_H
