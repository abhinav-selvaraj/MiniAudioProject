#ifndef SONGDATA_H
#define SONGDATA_H
#include <string.h>
#include <iostream>
using namespace std;
class ISongData {

   // Those functions that are not required for 4-25 will be commented out

   //virtual string* getSongTitle() = 0;

   //virtual string* getDuration() = 0;

   //virtual string* getPlayType() = 0;

   //virtual string* getArtist() = 0;

   virtual int getSongIndex() = 0; // This is the unique song id

   virtual string* getSongFilePath() = 0;

};

class SongData: public ISongData{
   private:
      string title;
      string duration;
      string type;
      string artist;
      string* path;
      int index;

   public:
      SongData();
      SongData(string* path, int index);
      
      void setSongIndex(int index);
      int getSongIndex();
      string* getSongFilePath();
};

#endif