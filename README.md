# GMod Offsets

Auto-generated memory offsets for **Garry's Mod** (`gmod.exe`) — x64 / Source Engine.

## Offsets

### Global

| Name       | Offset       |
|------------|--------------|
| EntityList | `0x7fff7a9f0a60` |
| LocalPlayer| `0x7fff7aac79d8` |
| ViewMatrix | `0x7fff7a992164` |

### Entity

| Property   | Offset  | Type     |
|------------|---------|----------|
| Health     | `0x100` | int      |
| Team       | `0x104` | int      |
| Position   | `0x138` | Vector   |
| Dormant    | `0xED`  | bool     |
| BoneMatrix | `0x26A8`| matrix*  |

### Module

| Name  | Value        |
|-------|--------------|
| Base  | `0x7fff7a0a0000` |
| Size  | `0xb7b000`       |

## Usage

Include the header in your C++ project:

```cpp
#include "GModOffsets.h"

auto entityList = read<uintptr_t>(GModOffsets::EntityList);
auto health = read<int>(entity + GModOffsets::Entity::Health);
```

## Website

Visit the [GitHub Pages site](https://yourusername.github.io/gmod-offsets/) to view the offsets in a clean web interface.

## License

MIT
