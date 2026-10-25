typedef struct Dbg { char pad[0xF4]; void (*print)(char *, ...); } Dbg;
typedef struct Obj { s32 pad0; s32 (*init)(struct Obj *, s32, s32, s32, s32); char pad[0x38]; s32 flag; s32 mode; char pad2[0x8]; u8 b0; u8 b1; } Obj;
typedef struct Ent { s32 v; u8 b0; u8 b1; u8 pad[2]; } Ent;
extern char D_004CF040[], D_004CF098[], D_004CF0A8[], D_004CF0B8[], D_004CF0D0[], D_004CF108[], D_004CF140[];
extern Ent D_003641C8[];
extern s32 D_010F64A0[];
Dbg *D_00480488;
s32 D_0048048C;
void func_001A1568(char *, s32, char *);
void func_001A2660(void *, s32, s32);
s32 CreateSema(void *);
void func_00194074(void *);
void func_00198C50(void *);

s32 func_00197078(Obj *o, s32 a1, u32 idx, s32 a3, s32 a4) {
    s32 sp[6];
    Ent *e;
    s32 n;
    void (*pr)(char *, ...);
    if (o == NULL) func_001A1568(D_004CF040, 0xF9, D_004CF098);
    if (a1 == 0) func_001A1568(D_004CF040, 0xFA, D_004CF0A8);
    if (a3 == 0) func_001A1568(D_004CF040, 0xFB, D_004CF0B8);
    func_001A2660(sp, 0, 0x18);
    sp[1] = 1;
    sp[2] = 1;
    D_0048048C = CreateSema(sp);
    if (idx >= 0x12) {
        pr = D_00480488->print;
        pr(D_004CF0D0, D_004CF040, 0x105);
        return 1;
    }
    func_001A2660(o, 0, 0xE90);
    func_00194074(o);
    if (idx == 3) func_00198C50(o);
    e = &D_003641C8[idx];
    if (o->init(o, e->v, idx, a3, a4) != 0) {
        pr = D_00480488->print;
        pr(D_004CF108, D_004CF040, 0x118);
        return 1;
    }
    o->mode = idx;
    o->b0 = e->b0;
    o->b1 = e->b1;
    n = D_010F64A0[1] + 1;
    D_010F64A0[1] = n;
    pr = D_00480488->print;
    pr(D_004CF140, n);
    o->flag = 1;
    return 0;
}
