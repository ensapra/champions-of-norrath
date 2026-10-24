extern s32 D_00446074[];
extern s32 D_00446078[];
s32 DeleteSema_2(s32);

s32 func_002E0D60(void) {
    if (D_00446074[0] >= 0) {
        DeleteSema_2(D_00446074[0]);
        D_00446074[0] = -1;
        DeleteSema_2(D_00446078[0]);
    }
    return 1;
}

typedef struct { u8 pad[0xC]; s32 xC; u8 pad2[4]; s32 x14; } Sub249;
typedef struct { u8 pad[0x24]; Sub249 *sub; } Obj249;
s32 func_00109808(void *, s32, s32, s32);
s32 func_00249EB0(void *);
s64 func_00249C88(Obj249 *o) {
    func_00109808(o, o->sub->xC, o->sub->x14, 0);
    return func_00249EB0(o);
}

void func_00249CE8(void *);
void func_00249C28(u8 *p) {
    s32 v;
    switch (*(s32 *)(p + 0x3C4)) {
    case 0:
        v = 0x80;
        break;
    case 1:
        func_00249CE8(p);
        v = 0x100;
        break;
    case 3:
        v = 0x4000;
        break;
    default:
        v = 0x200;
        break;
    }
    *(s32 *)(p + 0xF4) = v;
}

extern s32 D_0042DD90[];
void func_00194300(s32 *);
void func_00249B78(s32 init, s32 prio) {
    if (prio == 0xFFFF && init == 1) {
        s32 *p = D_0042DD90;
        s32 i = 9;
        while (i != -1) {
            *p = 0;
            i--;
            p++;
        }
    }
    if (prio == 0xFFFF && init == 0) {
        s32 *base = D_0042DD90;
        if (base != 0) {
            s32 *p = base + 10;
            while (p != base) {
                p--;
                func_00194300(p);
            }
        }
    }
}
