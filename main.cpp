#include "Player.cpp"

int main(){
    Player* p = new Player();
    string song1 = "./Songs/Deep_Stone_Lullaby.mp3";
    


    string song2 = "./Songs/Red_HGSS.mp3";
    string song3 = "./Songs/Zelda_BOTW.mp3";
    p->addSongToList(&song1);
    p->addSongToList(&song2);
    p->addSongToList(&song3);
    
    //p->playSong(0);
    // p->playSong(1);
    // p->playSong(2);
    // cout<<"Press Enter to stop playing: "<<endl;
    // if (cin.get() == '\n')
    //     p->stopSong(0);
   

    *p->getSongDetails(2);
    
    
    delete p;
    return 0;
    
}

