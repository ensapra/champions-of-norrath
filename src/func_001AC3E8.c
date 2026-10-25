typedef struct { u8 pad[0x5570]; u8 *p; u8 pad2[0x5DB0 - 0x5574]; } Ent5DB0;
extern Ent5DB0 D_00408600[];
extern s32 D_00484F44;
extern s32 D_0042A3E8[];
s32 func_001353A8(s32);
s32 func_001AC3E8(void) {
    s32 i;
    for (i = 0; i < D_00484F44; i++) {
        if (func_001353A8(D_0042A3E8[i]) != 0) {
            Ent5DB0 *e = &D_00408600[D_0042A3E8[i]];
            u32 m = 0x400000;
            return (*(u32 *)(e->p + 0xC) & m) != 0;
        }
    }
    return 0;
}
