//
// Created by Rickard Östergård on 2018-03-27.
//

#include "spotifybuffer.h"
#include "global.h"
#include "ringbuffer_cinder.h"

typedef RingBufferT<short> RingBufferCinder;
namespace SpotifyBuffer {

    RingBufferCinder* buffer;

    void setup(){
        buffer = new RingBufferCinder(81920);
    }

    bool write(short* shortsToWrite,int numOfFrames){
        return buffer->write(shortsToWrite, (size_t) numOfFrames);
    }

    void render(short* bufferToRenderInto,int numOfFrames){
        buffer->read(bufferToRenderInto,numOfFrames);
    }

    bool canRender(int numberOfFrames){
        return buffer->getAvailableRead()>= numberOfFrames;
    }

    void flush(){
        buffer->clear();
    }

}