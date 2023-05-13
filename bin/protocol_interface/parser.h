#ifndef PARSER_H
#define PARSER_H

#include "session.h"
#include "messages.h"

namespace protocol_interface::parser{

    using Session = protocol_interface::session::Session;

    template<typename Msg>
    struct ReadParser{
        virtual void readStream(Session* session, Msg* msg) = 0;
    };

    template<typename Msg>
    struct WriteParser{
        virtual void writeStream(Session* session, Msg *msg) = 0;
    };
    
}

#endif