#include "Player.cpp"

int main(){
    Player* p = new Player();
    string song1 = "./Songs/Deep_Stone_Lullaby.mp3";
    string song2 = "./Songs/Red_HGSS.mp3";
    string song3 = "./Songs/Zelda_BOTW.mp3";
    p->addSongToList(&song1);
    p->addSongToList(&song2);
    p->addSongToList(&song3);
    
    p->playSong(0);
    // p->playSong(1);
    // p->playSong(2);
    cout<<"Press Enter to stop playing: "<<endl;
    if (cin.get() == '\n')
        p->stopSong(0);
   


    //Tests for getting unique index
    assert(p->findSong(0)->getSongIndex() == 0);  //Index of first song is 0
    assert(p->findSong(1)->getSongIndex() == 1);  //Index of second song is 1
    assert(p->findSong(2)->getSongIndex() == 2);  //Index of third song is 2

    //Tests for retrieving the song file path
    assert(*p->findSong(0)->getSongFilePath() == "./Songs/Deep_Stone_Lullaby.mp3");
    assert(*p->findSong(1)->getSongFilePath() == "./Songs/Red_HGSS.mp3");
    assert(*p->findSong(2)->getSongFilePath() == "./Songs/Zelda_BOTW.mp3");

    //Tests that songs can be played. If they can, their cout msg will display
    assert(p->playSong(0) == 0); 
    assert(p->playSong(1) == 0);
    assert(p->playSong(2) == 0);
    
    
    
    delete p;
    return 0;
    
}

