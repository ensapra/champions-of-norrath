#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0014B870(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    u8 *p = *(u8 **)(arg0 + 0x4C);
    p = *(u8 **)(p + 0x9C);
    ((void (*)(u8 *, s32 *, s32 *))p)(arg0, arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}

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

void func_0011B9E0(void *);
void func_0014A32C(void *a, u32 idx) {
    s32 i;
    s32 n;
    void **list;
    if (F(a, 0x878) > 0 && idx < F(a, 0x878)) {
        func_0011B9E0((*(void ***)((char *)a + 0x870))[idx]);
        n = F(a, 0x878);
        for (i = idx; i < n - 1; i++) {
            (*(void ***)((char *)a + 0x870))[i] = (*(void ***)((char *)a + 0x870))[i + 1];
        }
        F(a, 0x890) = 1;
        (*(void ***)((char *)a + 0x870))[i] = NULL;
        F(a, 0x878) = n - 1;
        F(a, 0x88C) = 1;
    }
}

void func_0014CE60(void *obj, s32 arg1, s32 arg2) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x84);
    ((void (*)(void *, s32, s32))p)(obj, arg1, arg2);
}
