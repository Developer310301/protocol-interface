#ifndef MESSAGES_H
#define MESSAGES_H

#include <stdint.h>

namespace protocol_interface::messages{

    struct Message
    {
        char* buffer;
        uint64_t buffer_size;
        Message() = delete;
        Message(uint64_t buffer_size){
            this->buffer=new char[buffer_size];
            this->buffer_size = buffer_size;
        }
    };
    

    struct RequestMessage : Message{
        RequestMessage() = delete;
        RequestMessage(uint64_t buffer_size) : Message(buffer_size) {};
    };

    struct ResponseMessage : Message{
        ResponseMessage() = delete;
        ResponseMessage(uint64_t buffer_size) : Message(buffer_size) {};
    };

    struct MessageActions{

        virtual void clear(Message* msg) = 0;
        virtual void add(Message* msg, uint64_t start) = 0;
        virtual void append(Message *msg) = 0;

    };

}

#endif