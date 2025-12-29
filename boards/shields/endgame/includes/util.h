#define COMBO(name, keypress, keypos) \
combo_##name {                        \
   timeout-ms = <100>;                \
   bindings = <keypress>;             \
   key-positions = <keypos>;          \
};
