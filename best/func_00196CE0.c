s32 func_001A1568(void*,s32,void*);
void func_00196B88(void*);
s32 func_001967D8(void*,s32);
extern u8 jtbl_004C006C[];
typedef struct { u8 p[0x52]; u8 state; u8 p2[1]; s32 x54; u8 p3[0x10]; u32 count; u8 p4[0xc]; u8 *base; } O;

void func_00196CE0(O *a, u8 flag) {
    s32 mode = a->state & 0x7f;
    u32 i;
    u32 off = 0;
    if (a == 0) func_001A1568(jtbl_004C006C + 0xec4c, 0x7ff, jtbl_004C006C + 0xed04);
    for (i = 0; i < a->count; i++) {
        u8 *q = (u8 *)off + (u32)a->base;
        u8 *p;
        u16 id;
        off += 0x198;
        p = q + mode * 0x30;
        id = *(u16 *)(p + 4);
        if ((u16)(id - 2) < 2) {
            if (flag) {
                if (a->state & 0x80) continue;
                a->state = a->state & 0xfe;
            } else {
                a->state = a->state & 0x7e;
            }
            q[0x18c] &= 0xfd;
        } else if (id != 1 && id != 0xb) {
            q[0x18c] &= 0xfd;
        }
    }
    func_00196B88(a);
    func_001967D8(a, a->x54);
}
