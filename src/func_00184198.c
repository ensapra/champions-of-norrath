typedef struct { u8 data[0xE90]; } Elem184198;
typedef struct { u8 pad[0x470]; Elem184198 e[6]; s32 cur; } S184198;
extern S184198 D_001D2340;
s32 func_00197958(void *);

s32 func_00184198(void) {
    S184198 *s = &D_001D2340;
    Elem184198 *e = s->e;
    s32 r = func_00197958(&e[s->cur]);
    s32 ret = -1;
    switch (r) {
    case 0x80:
    case 0x81:
    case 0x82:
        ret = 1;
        break;
    case 1:
    case 2:
        ret = 0;
        break;
    }
    return ret;
}
