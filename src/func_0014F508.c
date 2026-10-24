void func_00151C5C(void *);
void func_00151BFC(void *, s32);
void *func_0011B9A8(s32);
void func_001AF710(void *);
extern u8 jtbl_004C006C[];
void func_0014F544(void *, s32 *);

typedef struct Node14F2E0 {
    struct Node14F2E0 *next;
    struct Node14F2E0 *prev;
    s32 val;
} Node14F2E0;

void func_0014F3F0(u8 *obj, s32 on)
{
    if (on != 0) {
        func_00151C5C(obj + 0x9D0);
    }
}

void func_0014F38C(u8 *obj, s32 a, s32 b)
{
    if (a != b) {
        if (a != 0) {
            func_00151C5C(obj + 0x9D0);
        }
        if (b != 0) {
            func_00151BFC(obj + 0x9D0, b);
        }
    }
}

void func_0014F2E0(u8 *obj, s32 v)
{
    Node14F2E0 *n;
    Node14F2E0 *list;
    if (obj == 0) {
        func_001AF710(jtbl_004C006C + 0xB38C);
        return;
    }
    n = func_0011B9A8(0x10);
    list = (Node14F2E0 *)(obj + 0x9B4);
    if (n == 0) {
        func_001AF710(jtbl_004C006C + 0xB3DC);
        return;
    }
    n->val = v;
    n->prev = list->prev;
    n->next = list;
    list->prev->next = n;
    list->prev = n;
}

void func_0014F508(void *obj, s32 *p)
{
    func_0014F544(obj, p);
    p[1] >>= 4;
    p[2] >>= 4;
}
