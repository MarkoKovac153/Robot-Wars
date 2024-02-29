#ifndef ROBOT_H
#define ROBOT_H

class robot {

    int x_pos, y_pos;
    int distance_travelled = 0;

    int robot_id;
    int team;

public:

    enum direction {
        NORTH = 0, EAST = 1, SOUTH = 2, WEST = 3
    };

    robot(const int& robot_id, int team, int x_pos, int y_pos);

    void setDirection(robot::direction direction) {
        _direction = direction;
    }

    robot::direction getDirection() const {
        return _direction;
    }

    robot::direction _direction = NORTH;

public:
    void setTeam(int team);

    bool isTravelled() const;

    void setTravelled();

    int getDistanceTravelled() const;

    void setDistanceTravelled(int distanceTravelled);

    int getXPos() const;

    void setXPos(int xPos);

    int getYPos() const;

    void setYPos(int yPos);

    const int& getRobotId() const { return robot_id; }

    int getTeam() const;

    bool travelled = false;

};

bool compare_robot_id(const robot& x, const robot& y);

bool compare_robot_travelled(const robot& x, const robot& y);

#endif

