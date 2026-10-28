s32 func_00160010(void *, s32, s32, f32, f32);
s32 func_002FD2E0(s32, s32);
s32 func_0030E018(void);
extern f32 D_0048196C;
void func_0022F240(void *arg0, void **arg1) {
    s32 i;
    s32 id;
    s32 key;
    void **entry;
    char *obj;
    char *vt;
    if (*(s16 *)((u8 *)arg0 + 0x23C) != 8) return;
    if (*(u16 *)((u8 *)arg0 + 0x126) & 0x20) return;
    func_00160010((u8 *)arg0 + 0x120,
        *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x24) + 0xAC),
        0x20, D_0048196C, D_0048196C);
    if (!*arg1) return;
    i = 0;
    entry = arg1;
    do {
        obj = *entry;
        vt = *(char **)(obj + 0x48);
        id = ((s32 (*)(void))(*(void **)(vt + 4)))();
        key = func_0030E018();
        if (func_002FD2E0(id, key)) {
            obj = *entry;
            vt = *(char **)(obj + 0x48) + 0x10;
            ((void (*)(void *, f32, void *, s32))(*(void **)(vt + 4)))(
                obj + *(s16 *)vt, 1.0f, arg0, 1);
        }
        i++;
        entry = (void **)((char *)arg1 + i * 4);
    } while (*entry);
}
