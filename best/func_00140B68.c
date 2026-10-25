struct Obj { char pad[0x48]; virtual ~Obj(); };
struct Node { s32 a; s32 b; s32 c; Obj *obj; };
struct It { s32 a; Node *cur; s32 c[6]; };
extern "C" {
s32 D_00483AC0;
s32 D_00483AC4;
s32 D_00483AD0;
s32 D_00483AD4;
s32 D_00483AD8[2] = {100000, 0};
s32 D_00486880;
s32 D_00486890;
s32 D_00486898;
extern s32 D_004FC0C0[];
extern s32 D_0050A1C0[];
extern s32 D_005182C0[];
extern s32 D_00518AC0[];
void func_00194660(It *, s32 *, s32);
void func_00194750(It *);
void func_00194700(It *, s32);

#define DRAIN(IT, LST, ARG) \
    func_00194660(&IT, LST, ARG); \
    for (nd = IT.cur; nd; nd = IT.cur) { \
        delete nd->obj; \
        func_00194750(&IT); \
    } \
    func_00194700(&IT, 2);
#define DRAIN2(IT, LST, ARG) \
    func_00194660(&IT, LST, ARG); \
    if (IT.cur) { \
        do { \
            nd = IT.cur; \
            delete nd->obj; \
            func_00194750(&IT); \
        } while (IT.cur); \
    } \
    func_00194700(&IT, 2);

void func_00140B68(void) {
    It it0, it1, it2, it3;
    Node *nd;
    s32 k, j, i, m;
    s32 *p;
    D_00483AD8[0] = 100000;
    D_00483AC4 = 1;
    D_00483AD0 = 0;
    D_00483AD4 = 0;
    DRAIN2(it0, &D_00486880, D_00483AC0);
    for (i = 0, k = 0; i < 120; i++, k += 15) {
        p = D_004FC0C0 + k * 8;
        for (j = 119; j >= 0; j--, p++) {
            DRAIN(it1, p, 0);
        }
    }
    for (m = 0, k = 0; m < 120; m++, k += 15) {
        p = D_0050A1C0 + k * 8;
        for (j = 119; j >= 0; j--, p++) {
            DRAIN(it2, p, 0);
        }
    }
    DRAIN2(it3, &D_00486890, 0);
    D_00486898 = 0;
    for (i = 0; i < 512; i++) {
        D_005182C0[i] = 0;
        D_00518AC0[i] = 0;
    }
    D_00483AC4 = 0;
}
}
