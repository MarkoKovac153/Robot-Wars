#include "stats.h"
#include "robot.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show(const vector<robot>& v) {
    //sort(v.begin(), v.end(),compare_robot_id);
    for (auto& x : v) {
        cout << "robot: " << x.getRobotId() <<
            ", position: (" << x.getXPos() << "," << x.getYPos() << ")" << "\n";
    }
}

void travelled(const vector<robot>& v) {
    //sort(v.begin(),v.end(),compare_robot_travelled);
    for (auto x : v) {
        cout << "robot: " << x.getRobotId() <<
            ", distance travelled: " << x.getDistanceTravelled() << "\n";
    }
    /*
    if (x.isTravelled()) {
        x.setDistanceTravelled(x.getDistanceTravelled() + 1);
        x.setTravelled(false);
    }
     */
}

//Within method displays how many robots are within distance  n from the origin with no other text displayed
int within(const vector<robot>& v, int n) {
    int robots_within_n = 0;
    for (auto& x : v) {
        if (abs(x.getXPos()) + abs(x.getYPos()) <= n) {
            robots_within_n += 1;
        }
    }
    return robots_within_n;
}

//turn_right method changes the direction that the robot is facing clockwise
void turn_right(const vector<robot>& v, int robot_id) {
    for (auto x : v) {
        if (robot_id == x.getRobotId()) {
            if (x.getDirection() == 0) {
                x.setDirection(robot::EAST);
            }
            if (x.getDirection() == 1) {
                x.setDirection(robot::SOUTH);
            }
            if (x.getDirection() == 2) {
                x.setDirection(robot::WEST);
            }
            if (x.getDirection() == 3) {
                x.setDirection(robot::NORTH);
            }
        }
    }
}

//turn_right method changes the direction that the robot is facing anti-clockwise
void turn_left(const vector<robot>& v, int robot_id) {
    for (auto x : v) {
        if (robot_id == x.getRobotId()) {
            if (x.getDirection() == 0) {
                x.setDirection(robot::WEST);
            }
            if (x.getDirection() == 1) {
                x.setDirection(robot::NORTH);
            }
            if (x.getDirection() == 2) {
                x.setDirection(robot::EAST);
            }
            if (x.getDirection() == 3) {
                x.setDirection(robot::SOUTH);
            }
        }
    }
}

//move method changes the position of the robot called by moving it by 1 in the direction it is facing
void move(const vector<robot>& v, int robot_id) {
    for (auto x : v) {
        if (robot_id == x.getRobotId()) {
            if (x.getDirection() == 0) {
                x.setYPos(x.getYPos() + 1);
            }
            if (x.getDirection() == 1) {
                x.setXPos(x.getXPos() + 1);
            }
            if (x.getDirection() == 2) {
                x.setYPos(x.getYPos() - 1);
            }
            if (x.getDirection() == 3) {
                x.setXPos(x.getXPos() + 1);
            }
            x.setDistanceTravelled(x.getDistanceTravelled() + 1);
        }
    }
}