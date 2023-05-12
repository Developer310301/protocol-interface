#ifndef SESSION_H
#define SESSION_H

#include <stdint.h>

namespace protocol_interface::session{

    struct Session{
        virtual int connectToPeer(char* peer, uint16_t port) = 0;
        virtual int disconnectFromPeer() = 0;
        virtual int readBytes(char* buffer, uint64_t size) = 0;
        virtual int readBytes(char* buffer, uint64_t size) = 0;
    };

}

#endif