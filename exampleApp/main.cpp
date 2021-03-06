/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main witty app loader
 *
 *        Version:  1.0
 *        Created:  18/07/11 21:05:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Matthew Sherborne (), msherborne@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <Wt/WServer>
#include <Wt/WApplication>
#include "App.hpp"

using Wt::WServer;

WApplication *createApplication(const WEnvironment& env) { return new exampleApp::App(env); }

int main ( int argc, char *argv[] ) {
    try {
        WServer server(argv[0]);
        server.setServerConfiguration(argc, argv, WTHTTP_CONFIGURATION);

        server.addEntryPoint(Wt::Application, createApplication, "", "/css/favicon.ico");
        if (server.start()) {
            WServer::waitForShutdown();
            server.stop();
        }
    } catch (Wt::WServer::Exception& e) {
        std::cerr << e.what() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "exception: " << e.what() << std::endl;
    }
}
