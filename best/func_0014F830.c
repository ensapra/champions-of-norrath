typedef struct { u8 pad[0x9C0]; s32 x, y, z, w; } Obj830;

void func_0014F830(Obj830 *a, s32 *b) {
    s32 t;
    a->x += b[0];
    t = b[1]; a->y += t;
    t = b[2]; a->z += t;
    a->w = b[3];
}
