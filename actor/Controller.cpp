#include "Controller.h"

Controller::Controller() {
}

void Controller::Init(char **argv) {
    Utils &u = Utils::Instance();
    u.logger("Initializing...", u.WARNING);
    Utils::Instance().InitParameters(argv);
    u.logger("Done!", u.SUCCESS);
}
