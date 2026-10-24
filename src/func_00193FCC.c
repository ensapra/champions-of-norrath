typedef struct E { s32 a, b; } E;
typedef struct Buf {
    E *data;
    s32 cap;
    s32 unk8;
    s32 count;
} Buf;
void func_001A24AC(void *, void *, s32);
void *D_00480488;

s32 func_00193FCC(Buf *arg0) {
    s32 n = arg0->cap;
    if (n > 0) {
        void *t = D_00480488;
        E *p;
        t = *(void **)((u8 *)t + 0x104);
        p = ((E *(*)(s32, s32))t)(0x10, n * 8);
        if ((s32)p < (s32)arg0->data) {
            func_001A24AC(p, arg0->data, arg0->count * 8);
            if (arg0->data != 0) {
                t = D_00480488;
                t = *(void **)((u8 *)t + 0x108);
                ((void (*)(void *))t)(arg0->data);
            }
            arg0->data = p;
            return 1;
        }
        t = D_00480488;
        t = *(void **)((u8 *)t + 0x108);
        ((void (*)(void *))t)(p);
    }
    return 0;
}
