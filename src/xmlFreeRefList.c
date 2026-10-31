/* identical to func_0015217C (matched), with its names changed by decompdecomp */
/* identical to func_002EC298 (matched), with its names changed by decompdecomp */

void xmlListDelete(void);
void *func_001449A8(s32);
void func_003021B0(void *, s32, s32);
void func_002EB7E0(s32, void *, s32);
void func_002EC2C0(s32, void *, s32);

typedef struct {
    u8 pad_00[0x14];
    s32 unk14;
    s32 unk18;
} TmpSub;

typedef struct {
    u8 pad_00[0x9A8];
    s64 unk9A8;
} TmpBig;

void xmlFreeRefList(s32 arg0) {
    if (arg0 != 0) {
        xmlListDelete();
    }
}

void *func_002EB790(void) {
    TmpBig *ptr = func_001449A8(0xA08);
    if (ptr != NULL) {
        func_003021B0(ptr, 0, 0xA08);
        ptr->unk9A8 = 0x28;
    }
    return ptr;
}

void func_002EB768(s32 arg0, void *arg1, TmpSub *arg2) {
    func_002EB7E0(arg2->unk18, arg0, arg1);
}

void func_002EB740(s32 arg0, void *arg1, TmpSub *arg2) {
    func_002EC2C0(arg2->unk14, arg0, arg1);
}
