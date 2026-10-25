typedef struct Vt { s32 pad; void *(*fn)(void); } Vt;
typedef struct Obj { char pad[0x48]; Vt *vt; } Obj;
typedef struct Node { s32 a; s32 b; s32 c; Obj *obj; } Node;
typedef struct It { s32 a; Node *cur; s32 c[6]; } It;
extern s32 D_00483AC0;
extern s32 D_00486878;
extern s32 D_004FBF90[];
extern s32 D_004FBFD0[];
void func_00194660(It *, s32 *, s32);
void func_00194750(It *);
void func_00194700(It *, s32);
void *func_002FF3C8(void) __attribute__((noreturn));
s32 func_003044FC(const char *, const char *);

#define SCAN(IT, LST) \
    func_00194660(&IT, LST, D_00483AC0); \
    for (nd = IT.cur; nd; nd = IT.cur) { \
        r = nd->obj ? nd->obj->vt->fn() : func_002FF3C8(); \
        if (func_003044FC(*(char **)r, name) == 0) { \
            out[n++] = (s32)nd->obj; \
            if (n == max - 1) { func_00194700(&IT, 2); goto done; } \
        } \
        func_00194750(&IT); \
    } \
    func_00194700(&IT, 2);

s32 *func_001407D8(char *name, s32 *out, s32 max) {
    It it0, it1, it2;
    Node *nd;
    void *r;
    s32 n = 0, i, j;
    SCAN(it0, &D_00486878);
    for (i = 0; i < 15; i++) {
        SCAN(it1, &D_004FBF90[i]);
    }
    for (j = 0; j < 60; j++) {
        func_00194660(&it2, &D_004FBFD0[j], D_00483AC0);
        if (it2.cur) {
            do {
                nd = it2.cur;
                r = nd->obj ? nd->obj->vt->fn() : func_002FF3C8();
                if (func_003044FC(*(char **)r, name) == 0) {
                    out[n++] = (s32)nd->obj;
                    if (n == max - 1) { func_00194700(&it2, 2); goto done; }
                }
                func_00194750(&it2);
            } while (it2.cur);
        }
        func_00194700(&it2, 2);
    }
    done:
    out[n] = 0;
    return &out[n];
}
