//
// Created by itay_ on 22/03/2021.
//

#ifndef SEARCHALGORITHMS_CLIENTHANDLER_H
#define SEARCHALGORITHMS_CLIENTHANDLER_H
#include <ios>

using namespace std;
/**
 * interface to conversesion with the client,
 * the objects of the implemantaions will be injected to
 * the Servrer's open function
 */
namespace server_side {
    class ClientHandler {
    public:
        virtual void handleClient(istream input_stream, ostream output_stream) = 0;
    };
}
#endif //SEARCHALGORITHMS_CLIENTHANDLER_H
