typedef struct { f32 x, y, z; } V3;
typedef struct { u8 pad0[0x10]; V3 pos; u8 pad1[0x18]; s32 f34; } Ent;
typedef struct { char pad[0x5570]; Ent *e; char pad2[0x5DB0 - 0x5574]; } Slot;
extern V3 D_00333D28[];
extern Slot D_00408600[];
extern s8 D_00483829;
extern s8 D_00483AC9;
extern u8 D_00483AFE;
extern s8 D_00484318;
extern s32 D_00484538;
extern Ent *D_00484F50;
Ent *func_001D39A8(void);

void func_001CB4E8(void) {
    Ent *e;
    s32 n, k, v;
    if (func_001D39A8()) {
        e = func_001D39A8();
        D_00483AC9 = 0;
        D_00483AFE = 1;
        D_00333D28[0] = e->pos;
        return;
    }
    v = D_00484F50->f34 != 1;
    if (D_00483829 && D_00484318 == 0) D_00483AC9 = 0;
    else D_00483AC9 = v;
    D_00483AFE = 0;
    n = D_00484538;
    for (k = 0; k < n; k++) {
        e = D_00408600[k].e;
        if (e) {
            s8 i = D_00483AFE++;
            D_00333D28[i] = e->pos;
        }
    }
}
