//
// Created by Rickard Östergård on 2018-03-27.
//

#ifndef SONGS_SPOIFYBUFFER_H
#define SONGS_SPOIFYBUFFER_H

namespace SpotifyBuffer{
    void setup();

    bool write(short* shortsToWrite,int numOfFrames);
    void render(short* bufferToRenderInto,int numOfFrames);
    bool canRender(int numberOfFrames);
    void flush();
}

#endif //SONGS_SPOIFYBUFFER_H
