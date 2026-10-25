extern u8 D_01109780[];
s32 CreateSema();
s32 DeleteSema();
s32 WaitSema();
s32 func_001AFCD0(s32, void *, s32, s32, s32, s32);
s32 *func_001B0110(void *);
void func_001B01B8(void *);

s32 func_001B0428(s32 *o, s32 a, s32 b, s32 c, s32 flags) {
    s32 *p;
    s32 buf[6];

    p = func_001B0110(D_01109780);
    if (p == 0) return -1;
    o[1] = p[6];
    o[0] = (s32)p;
    p[8] = a;
    p[9] = b;
    p[10] = c;
    p[5] = (s32)p;
    p[7] = (s32)o;
    if ((flags & 1) == 0) {
        buf[2] = 0;
        buf[1] = 1;
        o[2] = CreateSema(buf);
        if (o[2] < 0) {
            func_001B01B8(p);
            return -3;
        }
        if (func_001AFCD0(0x8000000C, p, 0x40, 0, 0, 0) == 0) {
            func_001B01B8(p);
            DeleteSema(o[2]);
            return -2;
        }
        WaitSema(o[2]);
        DeleteSema(o[2]);
        return 0;
    }
    o[2] = -1;
    if (func_001AFCD0(0x8000000C, p, 0x40, 0, 0, 0) == 0) {
        func_001B01B8(p);
        return -2;
    }
    return 0;
}
