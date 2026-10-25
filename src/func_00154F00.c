typedef struct { s32 x, y, z; } S_vec12;
extern u8 D_0044CB08[];
void func_001411F0(void *, void *, s32, s32);
void func_00154F00(void *a0, void *a1, s16 id) {
    S_vec12 t = *(S_vec12 *)a1;
    func_001411F0(a0, &t, 0, 0);
    *(s16 *)((u8 *)a0 + 0x38) = id;
    *(u8 *)((u8 *)a0 + 0x69) = 1;
    *(s32 *)((u8 *)a0 + 0xC) |= 8;
    *(void **)((u8 *)a0 + 0x48) = D_0044CB08;
}
