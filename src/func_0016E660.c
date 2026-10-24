/* identical to func_00153814 (matched), with its names changed by decompdecomp */
extern u8 D_001C8098[];
void func_0014D370(s32, s32);
extern void *func_001A1668(void *, void *, s32, s32, s32 (*)(const void *, const void *));
extern s32 func_00152920(const void *, const void *);

typedef struct { s32 x0; s32 x4; } W8;
typedef struct { s64 a; s64 b; } W16;
typedef struct { s32 x; } W4;

typedef struct {
    u8 pad[0x910];
    s32 x910;
    s32 x914;
    s32 x918;
} S153814;

void func_0016E660(S153814 *arg0, s32 arg1) {
    u8 *p = D_001C8098;
    p = *(u8 **)(p + 0xDF8);
    ((void (*)(void *, s32))p)(arg0, arg1);
    func_0014D370(arg0->x910, arg1);
    func_0014D370(arg0->x914, arg1);
    func_0014D370(arg0->x918, arg1);
}

void func_00152888(W16 *arg0, W16 **arg1) {
    *arg0 = **arg1;
}

void func_00152878(W4 *arg0, W4 **arg1) {
    *arg0 = **arg1;
}

typedef struct {
    s32 id;
    s32 x4;
    void (*fn)(void *, void *);
    s32 off;
    s32 x10;
} Handler;

typedef struct {
    s32 id;
    s32 x4;
    u8 data[8];
} Msg;

void func_0015275C(void *arg0, void *arg1, s32 arg2, Msg *arg3, s32 arg4) {
    Handler key;
    Handler *h;
    s32 i;

    if (arg3 == NULL) {
        return;
    }
    for (i = 0; i < arg4; i++, arg3++) {
        key.id = arg3->id;
        h = func_001A1668(&key, arg1, arg2, 0x14, func_00152920);
        if (h != NULL && h->fn != NULL) {
            h->fn((u8 *)arg0 + h->off, arg3->data);
        }
    }
}
