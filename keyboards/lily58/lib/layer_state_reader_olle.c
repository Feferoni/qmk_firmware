#include "action_layer.h"
#include <stdio.h>

#define L_BASE 0
#define L_LOWER (1 << 1)
#define L_LOWER2 (1 << 2)
#define L_RAISE (1 << 3)
#define L_RAISE2 (1 << 4)
#define L_ADJUST (1 << 5)
#define L_FUNCTION (1 << 6)
#define L_NUMPAD (1 << 7)
#define L_ADJUST_TRI (L_ADJUST | L_RAISE | L_LOWER)

char layer_state_str[24];

const char *read_layer_state(void) {
    switch (layer_state) {
        case L_BASE:
            snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Base");
            break;
        case L_LOWER:
            snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
            break;
        case L_LOWER2:
            snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower2");
            break;
        case L_RAISE:
            snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
            break;
        case L_RAISE2:
            snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise2");
            break;
        case L_FUNCTION:
            snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Function");
            break;
        case L_NUMPAD:
            snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numpad");
            break;
        case L_ADJUST:
        case L_ADJUST_TRI:
            snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
            break;
        default:
            snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%u", layer_state);
    }

    return layer_state_str;
}
