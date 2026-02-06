#ifndef UMAY_ENGINE_API_GAME_OBJECT_H
#define UMAY_ENGINE_API_GAME_OBJECT_H

#include <cstdint>
#include <stdint.h>

/*
 * [GAME OBJ]
 * That's a common struct for all obj in game.
 * You can create any material or player with that.
 * 
 * */

struct point {
  double x, y, z;
};

struct game_obj {
  char *texture_path;
  struct point model_box;
  struct point hit_box;

  volatile struct point position;
  volatile double health; // if destructible, has health 

  uint8_t isMoveable;
  uint8_t isDestructible;

  void (*init)(point position);
  void (*move)(point position);
  void (*takeDamage)(double dmg);
};

#endif // UMAY_ENGINE_API_GAME_OBJECT_H
