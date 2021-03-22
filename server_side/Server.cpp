//
// Created by itay_ on 22/03/2021.
//

#include "Server.h"
#include "C:\Users\itay_\CLionProjects\SearchAlgorithms\ClientHandler.h"

/**
 * interfeace for servers
 */
namespace server_side{
    class Server {
    public:
        virtual void open(int port, ClientHandler clientHandler)=0;
        virtual void stop()=0;


    };
}
/**
 * implementaion of Serial Server
 */
class MySerialServer: public server_side::Server{

};