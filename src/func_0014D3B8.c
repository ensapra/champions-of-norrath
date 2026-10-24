void func_0014D3DC(void *w, s32 a, s32 b) {
    *(s32 *)((u8 *)w + 0x5E0) = a;
    *(s32 *)((u8 *)w + 0x5E4) = b;
}

void func_0014D3B8(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x114);
    ((void (*)(void *))p)(obj);
}

void func_0014D394(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x110);
    ((void (*)(void *))p)(obj);
}
