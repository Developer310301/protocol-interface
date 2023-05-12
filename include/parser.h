#ifndef PARSER_H
#define PARSER_H

#include "session.h"
#include "messages.h"

namespace protocol_interface::parser{

    using Session = protocol_interface::session::Session;
    using Message = protocol_interface::messages::Message;
    using RequestMessage = protocol_interface::messages::RequestMessage;
    using ResponseMessage = protocol_interface::messages::ResponseMessage;

    struct ReadParser{
        virtual void readStream(Session* session, RequestMessage* msg) = 0;
        virtual void readStream(Session* session, ResponseMessage* msg) = 0;
    };

    struct WriteParser{
        virtual void writeStream(Session* session, RequestMessage *msg) = 0;
        virtual void writeStream(Session* session, ResponseMessage *msg) = 0;
    };
    
}

#endif