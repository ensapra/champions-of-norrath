typedef struct { s32 id; s32 pad; s64 p; } Req;
extern s32 D_001C4E24[], D_001C4E2C[], D_001C6834[], D_001BB6C4[];
extern u8 D_004CA3E8[];
extern u8 func_0013E198[], func_0013E1C0[], func_0013E2B0[];
s32 func_0013B6F0(void *, s32);
s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, s32, s32);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);
void func_0013DE70(s32);
void func_0012C8D8(s32);
void func_0014CBF4(s32, void *, s32);
void *func_001A2660(void *, s32, s32);

void func_0012C950(s32 arg0) {
    s32 sp[8];
    u8 buf[16];
    Req req[4];
    Req *q;
    s32 r;
    switch (arg0) {
    case 0:
    case 1:
        if (*D_001C4E24 != -1) {
            r = func_0013B6F0(D_004CA3E8, -1);
            switch (r) {
            case 1:
                func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x27), 0, *D_001BB6C4);
                break;
            case 2:
                func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x28), 0, *D_001BB6C4);
                break;
            case 3:
                func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x29), 0, *D_001BB6C4);
                break;
            }
            *D_001C4E2C = 0;
            if (*D_001C4E24 < *D_001C6834) {
                func_00118140(sp, 1, func_0013E198, func_0013E1C0, func_0013E2B0);
                sp[2] = (s32)func_0012C8D8;
                func_0013DE70(*D_001C4E24);
                func_00118160(sp);
            } else {
                func_0012C8D8(0x64);
            }
        } else {
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x34), 0, *D_001BB6C4);
        }
        break;
    case 2:
        func_001A2660(buf, 0, 16);
        if (*D_001BB6C4) {
            q = req;
            q->id = 0x61;
            q->p = (s32)buf;
            q[1].p = (s32)buf;
            q[1].id = 0x5C;
            func_0014CBF4(*D_001BB6C4, q, 2);
        }
        break;
    }
}
