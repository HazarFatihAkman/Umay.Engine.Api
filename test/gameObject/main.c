#include "../../include/gameObject.h"

/*
 * [JUST METHOD TESTING]
 * */

#include <stdio.h>
#include <unistd.h>

#define SPEED 5;

static void move(struct game_obj *self, char key) {
  if (key == 'W' || key == 'w') {
    self->position.y += SPEED;
  }
  else if (key == 'S' || key == 's') {
    self->position.y -= SPEED;
  }
  else if (key == 'D' || key == 'd') {
    self->position.x += SPEED; 
  }
  else if (key == 'A' || key == 'a') {
    self->position.x -= SPEED;
  }
}

int main(int argv, char *args[]) {
  struct game_obj obj = {
    .isMoveable = 1,
    .move = &move
  };

  char key;
  while (key != 'q') {
    read(STDIN_FILENO, &key, 1);
    obj.move(&obj, key);
    printf("Obj : x - %d y - %d\n", (int)obj.position.x, (int)obj.position.y); 
  }

  return 1;
}
