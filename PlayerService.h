#ifndef HW1_PLAYERSERVICE_H
#define HW1_PLAYERSERVICE_H
#include "ViewAble.h"
#include "Series.h"
#include "Movie.h"
#include "Client.h"

class PlayerService {
private:
    vector<SmartPtr<ViewAble>> database;
    int requests;

public:
    //c'tors
    PlayerService();
    PlayerService(const PlayerService&);

    //de'tors
    virtual ~PlayerService();

    //operators
    PlayerService& operator=(const PlayerService& other ){
        database = other.database;//.getDatabase();
        requests = other.getRequests();
        return *this;
    }

    //methods
    SmartPtr<ViewAble> requestsViewable(string id);
    void addSeries(SmartPtr<Series>);
    void addMovies(SmartPtr<Movie>);
    void addViewAble(SmartPtr<ViewAble>);
    void printSeries();
    void printMovies();

    //getters
    const vector<SmartPtr<ViewAble>> &getDatabase() const;

    int getRequests() const;

};

#endif //HW1_PLAYERSERVICE_H
