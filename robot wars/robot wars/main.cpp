#include "stats.h"
#include "robot.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    //instantiating two robots
    robot robot1(2311, 1, 0, 0);
    robot robot2(2411, 2, 1, 2);

    //instantiating vector to contain all robots
    vector<robot> all_robots{ robot1,robot2 };

    //sort all_robots vector based on robot id
    sort(all_robots.begin(), all_robots.end(), compare_robot_id);
    //demonstration of show method in stats.h
    show(all_robots);

    //sort all_robots vector based on distance travelled
    sort(all_robots.begin(), all_robots.end(), compare_robot_travelled);
    //demonstration of travelled method in stats.h
    travelled(all_robots);

    //demonstration of within method in stats.h
    cout << within(all_robots, 1) << "\n";

    //demonstration of turn_left method in stats.h
    turn_left(all_robots, 2311);

    //demonstration of turn_left method in stats.h
    turn_right(all_robots, 2411);

    //demonstration of move_ method in stats.h
    move(all_robots, 2411);

    return 0;
}