typedef struct { u8 d[0x20]; } Ent;
extern s8 D_00486DA0; extern Ent D_008D60E0[]; void func_001D1108(void*); s32 func_003044FC(void*,void*); void func_00304640(void*,void*);
void func_002846F8(void) {
    u8 buf[0x40];
    s32 i;
    func_001D1108(buf);
    for (i = 0; i < D_00486DA0; i++) {
        if (func_003044FC(&D_008D60E0[i], buf) == 0) return;
    }
    func_00304640(&D_008D60E0[D_00486DA0++], buf);
}
