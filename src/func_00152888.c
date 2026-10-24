extern void *func_001A1668(void *, void *, s32, s32, s32 (*)(const void *, const void *));
extern s32 func_00152920(const void *, const void *);

typedef struct { s64 a; s64 b; } W16;
typedef struct { s32 x; } W4;

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
