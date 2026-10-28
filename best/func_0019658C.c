typedef struct { s32 a; u32 flags; s32 cur; } G;
extern G D_00364290;
extern char D_004CECB8[], D_004CED70[];
typedef struct { char pad[0x48]; s32 id; s32 f; } O;
s32 func_001966E8(void *, s32);
void func_001A1568(void *, s32, void *);

void func_0019658C(O *o, s32 arg1) {
    s32 r;
    if (o == NULL) {
        func_001A1568(D_004CECB8, 0x6C6, D_004CED70);
    }
    r = func_001966E8(o, arg1);
    if (r == -1) {
        if (D_00364290.cur != -1) {
            o->f = 0;
            D_00364290.cur = -1;
        }
    } else if (!(D_00364290.flags & 1)) {
        o->id = r;
        o->f = 1;
        D_00364290.cur = r;
        D_00364290.flags |= 1;
    } else if (D_00364290.cur != r) {
        o->f = 0;
        D_00364290.cur = -1;
    }
}
