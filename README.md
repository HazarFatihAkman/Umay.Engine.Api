# UMAY ENGINE API
A high-performance 2D and 3D game engine api built in C.

## Features

### Umay Engine: Node System
The Node system let's you to create various materials like mobs, players, buildings, etc. It supports both 2D and 3D coordinate system and rendering the assets by flags.

### Core Structure

#### Node2D/3D Attributes
|property_name|description|
|-|-|
|`uint32_t id`|A unique identifier for every object. Engine will validate objects by id.
|`vec3_t/vec2_t position`|Represting the XYZ(vec3_t)/XY(vec2_t) coordinates.|
|`uint32_t flags`|Used for state indicators (active, destrutible, etc.)|
|`uint32_t asset_flags`|Storting references to model/texture folders and IDs via `asset_manager_t` and give you flexibility to change asset immediately with setting new asset flag.|

## API References

### Node2D Interface (`node_2d.h`)
```c
typedef struct node2d {
    uint32_t id;
    vec2_t position;
    uint32_t flags;
    uint32_t asset_flags;
} node2d_t;

node2d_t node2d_new(uint32_t id, vec2_t position, uint32_t flags, uint32_t asset_flags);
uint8_t node2d_set_position(node2d_t *node2d, const vec2_t v);
uint8_t node2d_set_flags(node2d_t *node2d, const uint32_t flags);
uint8_t node2d_set_asset_flags(node2d_t *node2d, const uint32_t asset_flags);
void node2d_print(const node2d_t node2d);
```

### Node3d Interface(`node_3d.h`)
```c
typedef struct node3d {
    uint32_t id;
    vec3_t position;
    uint32_t flags;
    uint32_t asset_flags;
} node3d_t;

node3d_t node3d_new(uint32_t id, vec3_t position, uint32_t flags, uint32_t asset_flags);
uint8_t node3d_set_position(node3d_t *node3d, const vec3_t v);
uint8_t node3d_set_flags(node3d_t *node3d, const uint32_t flags);
uint8_t node3d_set_asset_flags(node3d_t *node3d, const uint32_t asset_flags);
void node3d_print(const node3d_t node3d);
```

### Vec3 Interface(`vec3_t`)
```c
typedef struct vec3 {
  float x;
  float y;
  float z;
} vec3_t;

vec3_t vec3_new(float x, float y, float z);
uint8_t vec3_zero(vec3_t *v);
uint8_t vec3_set(vec3_t *v, float x, float y, float z);
void vec3_print(const vec3_t v);
```

### Vec2 Interface(`vec2_t`)
```c

typedef struct vec2 {
  float x;
  float y;
} vec2_t;

vec2_t vec2_new(float x, float y);

uint8_t vec2_zero(vec2_t *v);
uint8_t vec2_set(vec2_t *v, float x, float y);
void vec2_print(const vec2_t v);
```

### Print Interface(`print.h`)
```c
void print_info(const char *property_name, const char *format, ...);
void print_warn(const char *property_name, const char *format, ...);
void print_err(const char *property_name, const char *format, ...);
```

## Implementation Details
- Logging: Every struct has own print format and print method.
- Safety: `void` methods return `uint8_t` status code to indicate the success or failure of the methods.

