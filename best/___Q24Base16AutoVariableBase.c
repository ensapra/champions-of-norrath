/* identical to func_0031AA30 (matched), with its names changed by decompdecomp */
extern void func_002FD2A8(void *, s32);
extern void func_002FEDF0(void *);
extern u8 D_004537E0[];
extern u8 D_00453930[];
extern u8 D_00453830[];

typedef struct { s32 unk0; void *unk4; } ObjOff4;
typedef struct { void *unk0; } ObjOff0;

void func_0031AB00(ObjOff4 *obj, s32 flag) {
    obj->unk4 = D_004537E0;
    func_002FD2A8(obj, 0);
    if (flag & 1) {
        func_002FEDF0(obj);
    }
}

void ___Q24Base16AutoVariableBase(ObjOff0 *obj, s32 flag) {
    obj->unk0 = D_00453930;
    if (flag & 1) {
        func_002FEDF0(obj);
    }
}

s32 func_0031ABD0(s32 x) {
    return x >= 4;
}

void func_0031AA20(ObjOff0 *obj) {
    obj->unk0 = D_00453830;
}
