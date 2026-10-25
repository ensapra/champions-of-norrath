typedef struct {
    s32 unk0;
    u8 pad4[0xC];
    u8 unk10[0x18];
    u8 unk28[0xC];
} Elem34;

void func_001590C0(void *m);
void func_001627A0(s32 a, s32 b, void *m);
void func_00159AE0(s32 a, void *m, void *out);
void func_00159B98(s32 a, void *m, void *out);

void func_0016CB00(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    u8 m[48];
    Elem34 *e = (Elem34 *)(arg0 + arg0[0x22] * 0x10);
    Elem34 *p;

    if (arg1 != 0) {
        func_001627A0(arg1, e[arg2].unk0, m);
    } else {
        func_001590C0(m);
    }
    p = &e[arg2];
    if (arg3 != 0) {
        func_00159AE0(arg3, m, p->unk28);
    }
    if (arg4 != 0) {
        func_00159B98(arg4, m, p->unk10);
    }
}
