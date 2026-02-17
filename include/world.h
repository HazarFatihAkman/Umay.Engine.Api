#ifndef UMAY_ENGINE_API_WORLD_H
#define UMAY_ENGINE_API_WORLD_H

#define PER_PAGE 1024

#include "../lib/cdl/listInterface.h"

typedef struct {
  float x[PER_PAGE];
  float y[PER_PAGE];
  float z[PER_PAGE];
} position_pg;

typedef struct {
  double value[PER_PAGE];
} health_pg;

typedef li_t health_pgs;
typedef li_t position_pgs;

typedef struct {
  position_pgs position_pgs;
  health_pgs health_pgs;
} world_t;

#endif // UMAY_ENGINE_API_WORLD_H

