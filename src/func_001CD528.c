typedef struct { u8 pad[0xC]; u32 flags; } Ent;
typedef struct { char pad[0x5570]; Ent *e; char pad2[0x5DB0 - 0x5574]; } Slot;
extern Slot D_00408600[];
extern s32 D_0042A3D8[], D_0042A3E8[];
extern s32 D_00484538, D_00484F40, D_00484F44, D_00484F48, D_00484F4C;
extern s32 func_001353A8(s32);

void func_001CD528(void) {
    s32 i;
    D_00484F4C = D_00484F48;
    D_00484F40 = -1;
    D_00484F44 = 0;
    D_00484F48 = 0;
    for (i = 0; i < D_00484538; i++) {
        Ent *e = D_00408600[i].e;
        if (e && !(e->flags & 8)) {
            D_0042A3E8[D_00484F44++] = i;
            if (func_001353A8(i)) {
                D_0042A3D8[D_00484F48++] = i;
                if (D_00484F40 == -1) D_00484F40 = i;
            }
        }
    }
}
