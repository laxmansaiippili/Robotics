# Left-Wall Following Algorithm

The robot currently uses the Left-Wall Following Algorithm to navigate through the maze.

## Sensor Setup

The robot uses two ultrasonic sensors:

- Left sensor
- Front sensor

The left sensor checks the distance from the left wall, while the front sensor checks whether there is a wall or obstacle ahead.

## Navigation Logic

The robot follows a simple priority:

1. Check the left side.
2. If the left side is open, turn left.
3. If the left side is blocked, check the front.
4. If the front is open, move forward.
5. If both the left and front paths are blocked, turn right.
