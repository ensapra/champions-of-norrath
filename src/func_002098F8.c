typedef struct { s16 off; s16 pad; void (*fn)(void *, s32); } VE;
void func_0010D428(void *, s32);
s32 func_0010EBF8(void *, s32);
s32 func_0010A428(void *, s32);
void func_00111830(void *, f32);
void func_00111490(void *, f32);
s32 func_00113128(void *);
s32 func_00143878(void *);
s64 func_002098F8(char *t) {
    VE *v;
    func_0010D428(t, *(s32 *)(*(char **)(t + 0x24) + 0xC));
    if (func_0010EBF8(t, *(s32 *)(*(char **)(t + 0x24) + 0xC)) == 0 && func_0010A428(t, 0x258) != 0) {
        func_00111830(t, 1.0f);
        func_00111490(t, 1.0f);
        switch (*(s16 *)(t + 0x23C)) {
        case 0:
            if (*(s32 *)(t + 0x100) < *(s32 *)(t + 0x328)) {
                v = (VE *)(*(char **)(t + 0x48) + 0xB8);
                v->fn(t + v->off, 1);
            }
            break;
        case 1:
            func_00113128(t);
            break;
        case 10:
            if (*(u16 *)(t + 0x126) & 0x80) func_00143878(t);
            break;
        }
    }
}
