#include "Player.hpp"
#include "clib_ma.c"
using namespace std;

Player::Player(){};

SongData* Player::findSong(int index){
    ptr = songList.begin();
    for(int i = 0; i < index; i++){
        ++ptr;
    }
    return *ptr;
}
int Player::playSong(int index){
    SongData* temp = findSong(index);
    string path = *temp->getSongFilePath(); 
    
    const char *cStr = path.c_str();
    int retval = play_song(cStr);
     cout<<"Now playing: " <<path<<endl;
    return 0;
}

int Player::stopSong(int index){
    int retval = stop_song();
    return 0;
}

int Player::addSongToList(string* song_path){
    this->currIndex++;
    SongData* song = new SongData(song_path, this->currIndex);
    this->songList.push_back(song);
    return 0; 
}

