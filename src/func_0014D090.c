typedef struct NodeCD0C {
    struct NodeCD0C *next;
    char pad04[0x60];
    s32 field64;
    s32 field68;
} NodeCD0C;

typedef struct ObjCD0C {
    char pad00[0x4C];
    NodeCD0C *node;
} ObjCD0C;

s32 func_001516C4(s32, s32, s32);
s32 *func_001526F4(s32, void *, s32, s32);

s32 func_0014CD0C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ObjCD0C *o = (ObjCD0C *)arg0;
    NodeCD0C *cur = o->node;
    for (;;) {
        s32 *temp = func_001526F4(arg1, arg0, cur->field64, cur->field68);
        if (temp != NULL) {
            *temp = func_001516C4(*temp, arg2, arg3);
            return 1;
        }
        cur = cur->next;
        if (cur == NULL) {
            return 0;
        }
    }
}

void func_0014CFB8(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x94);
    ((void (*)(void))p)();
}

void func_0014D024(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x98);
    ((void (*)(void))p)();
}

void func_0014D090(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x9C);
    ((void (*)(void))p)();
}
