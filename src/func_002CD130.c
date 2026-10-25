s32 D_00486614;
typedef struct { u8 id : 4; u8 pad : 3; u8 on : 1; } Bits2CD130;

void func_002CD130(Bits2CD130 *arg0) {
    if (arg0->on) {
        D_00486614 |= arg0->id;
    } else {
        D_00486614 &= ~arg0->id;
    }
}
