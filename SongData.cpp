#include "SongData.hpp"


SongData::SongData(){
    this->title = "";
    this->duration = "";
    this->type = "";
    this->artist = "";
    this->path = nullptr;
}

SongData::SongData(string* p, int index){
    this->title = "";
    this->duration = "";
    this->type = "";
    this->artist = "";
    this->path = p;
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

