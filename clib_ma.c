
#define MINIAUDIO_IMPLEMENTATION

#include "clib_ma.h"
#include "miniaudio.h"
#include <stdio.h>

ma_result result;
ma_engine engine;

int play_song(const char* play_file_name){
    
    result = ma_engine_init(NULL, &engine);
    if (result != MA_SUCCESS) {
        printf("Failed to initialize audio engine.");
        return -1;
    }

    ma_engine_play_sound(&engine, play_file_name, NULL);
    return 0;
}

int stop_song(){
    ma_engine_uninit(&engine);
    return 0;
}