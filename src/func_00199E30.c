extern char D_004CF358[], D_004CF378[];
s32 func_001A1568(void *, s32, void *);
typedef struct { s64 a, b; } V16;
typedef struct {
    char pad0[0x52]; u8 id;
    char pad1[0x15]; u32 count;
    V16 *tbl; char pad2[8];
    char *ents;
} O199;
s32 func_00199E30(O199 *o, u16 key, V16 *out) {
    u32 i;
    s32 id = o->id & 0x7F;
    if (o == 0) func_001A1568(D_004CF358, 0x365, D_004CF378);
    for (i = 0; i < o->count; i++) {
        char *e = (char *)(i * 0x198) + (u32)o->ents;
        u16 *p = (u16 *)(e + id * 0x30);
        if (key == p[2]) {
            *out = o->tbl[*(u16 *)(e + 0x180)];
            return 0;
        }
    }
    return 1;
}
