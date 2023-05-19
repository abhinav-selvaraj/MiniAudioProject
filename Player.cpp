#include "Player.hpp"
#include "clib_ma.c"
#include <fileref.h>
#include <tag.h>
#include <tpropertymap.h>
using namespace std;

Player::Player(){};

SongData* Player::findSong(int index){
    ptr = songList.begin();
    for(int i = 0; i < index; i++){
        ++ptr;
    }
    return *ptr;
}

SongData* Player::getSongDetails(int index){
    SongData* s = findSong(index);
    cout<<"Title: "<<*s->getSongTitle()<<endl;
    cout<<"Duration (sec): "<<*s->getDuration()<<endl;
    cout<<"Play type: "<<*s->getPlayType()<<endl;
    cout<<"Artist(s): "<<*s->getArtist()<<endl;
    cout<<"Index: "<<s->getSongIndex()<<endl;
    cout<<"File Path: "<<*s->getSongFilePath()<<endl;
    return s;
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
    TagLib::FileRef f(song_path->c_str());
    TagLib::Tag *tag = f.tag();
    TagLib::AudioProperties* audio_properties = f.audioProperties();
    string titleVar = tag->title().toCString();

    unsigned int duration_seconds = audio_properties->length();
    string duration = to_string(duration_seconds);
    string type = tag->genre().toCString();
    string artist = tag->artist().toCString();

    
    
    SongData* song = new SongData(song_path, this->currIndex, titleVar, duration, type, artist);
    this->songList.push_back(song);
    return 0; 
}

