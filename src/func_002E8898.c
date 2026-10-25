typedef struct { u8 pad0[0x28]; s32 sema; u8 pad1[0x14]; u16 f40; u16 pad2; u16 f44; } A;
typedef struct { u8 pad[0x2C0]; u16 a; u16 b; union { s16 c; s8 cb[2]; } c; union { s16 d; u8 db[2]; } d; s32 e; } B;
extern A D_008EBDD8;
extern B D_008E8C80;
extern char D_0047C038[];
extern char func_002E9068[];
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, void *);
void WaitSema_2(s32);
void func_00302560(void *, s32, s32);

void func_002E8898(void) {
    D_008E8C80.a = D_008EBDD8.f40;
    D_008E8C80.b = D_008EBDD8.f44;
    D_008E8C80.c.c = 0x106;
    D_008E8C80.d.d = 0;
    D_008E8C80.e = 0;
    if (func_002D8270(&D_008EBDD8, 3, 1, &D_008E8C80.a, 0x10, &D_008E8C80.a, 0x10, func_002E9068, &D_008E8C80.a) >= 0)
        WaitSema_2(D_008EBDD8.sema);
    if (D_008E8C80.e != 0)
        while (1);
    func_00302560(D_0047C038, D_008E8C80.c.cb[1], D_008E8C80.d.db[0]);
    if (D_008E8C80.c.c != D_008E8C80.d.d)
        while (1);
}
