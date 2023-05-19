#ifndef PLAYER_H
#define PLAYER_H
#include "SongData.cpp"
#include <list>
using namespace std;

class IPlayer {

    virtual int playSong(int index) = 0;

    virtual int stopSong(int index) = 0;

    virtual ISongData* getSongDetails(int index) = 0; // For 4-25, this method is not required for turn in but required later

    virtual int addSongToList(string* song_path) = 0; // add a song to the list along with a unique id (based on ISongData)

};

class Player : public IPlayer{

    private:
        list<SongData*> songList;
        list<SongData*>::iterator ptr;
        int currIndex = -1;


    public: 
        Player();
        
        int playSong(int index);
        int stopSong(int index);

        int addSongToList(string* song_path);

        list<SongData*> getList(){
            return this->songList;
        }

        SongData* findSong(int index);
        SongData* getSongDetails(int index);
};
#endif