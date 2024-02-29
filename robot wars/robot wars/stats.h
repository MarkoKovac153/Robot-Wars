
#ifndef UNTITLED2_STATS_H
#define UNTITLED2_STATS_H
#include "robot.h"
#include <vector>
const int origin_x = 0, origin_y = 0;

void show(const std::vector<robot>& v);

void travelled(const std::vector<robot>& v);

int within(const std::vector<robot>& v, int n);

void turn_right(const std::vector<robot>& v, int robot_id);

void turn_left(const std::vector<robot>& v, int robot_id);

void move(const std::vector<robot>& v, int robot_id);

#endif //UNTITLED2_STATS_H