typedef struct { char data[0x85]; } Slot;
typedef struct { char data[0x84]; } Blob;
extern Slot D_00442668[][16];
extern s32 D_00486624;

void func_002CC2F0(s32 arg0, Blob *arg1) {
    s32 last = -1;
    s32 i;
    s32 next;
    for (i = 0; i < 16; i++) {
        s32 j = i + D_00486624;
        Slot *q;
        j %= 16;
        q = &D_00442668[arg0][j];
        if (q->data[0x84] != 0) last = i;
    }
    next = (last != -1) ? last + 1 : 4;
    if (next != 16) {
        Slot *s = &D_00442668[arg0][(next + D_00486624) % 16];
        *(Blob *)s = *arg1;
        s->data[0x84] = 1;
    }
}
