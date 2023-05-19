#include "SongData.hpp"

SongData::SongData(){
    this->title = nullptr;
    this->duration = nullptr;
    this->type = nullptr;
    this->artist = nullptr;
    this->path = nullptr;
}

SongData::SongData(string* path, int index, string title, string duration, string type, string artist){
   
    
    this->title = new string(title);
    this->duration =new string(duration);
    this->type = new string(type);
    this->artist = new string(artist);
    this->path = path;
    this->index = index;
}


void SongData::setSongIndex(int index){
    this->index = index;
}
int SongData::getSongIndex(){
    return this->index;
}

string* SongData::getSongFilePath(){
    return this->path;
}

string* SongData::getArtist(){
    return this->artist;
}

string* SongData::getSongTitle(){
    return this->title;
    
}

string* SongData::getPlayType(){
    return this->type;
}

string* SongData::getDuration(){
    return this->duration;
}