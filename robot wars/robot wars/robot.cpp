#include "robot.h"

robot::robot(const int& robot_id, int team, int x_pos, int y_pos) :
    robot_id(robot_id), team(team), x_pos(x_pos), y_pos(y_pos) {}

int robot::getXPos() const {
    return x_pos;
}

void robot::setXPos(int xPos) {
    x_pos = xPos;
}

int robot::getYPos() const {
    return y_pos;
}

void robot::setYPos(int yPos) {
    y_pos = yPos;
}

int robot::getTeam() const {
    return team;
}

int robot::getDistanceTravelled() const {
    return distance_travelled;
}

void robot::setDistanceTravelled(int distanceTravelled) {
    distance_travelled = distanceTravelled;
}

bool robot::isTravelled() const {
    return travelled;
}

void robot::setTravelled() {
    robot::travelled = false;
}

void robot::setTeam(int i) {
    robot::team = i;
}

bool compare_robot_id(const robot& x, const robot& y) {
    return x.getRobotId() < y.getRobotId();
}

bool compare_robot_travelled(const robot& x, const robot& y) {
    return x.getDistanceTravelled() < y.getDistanceTravelled();
}

