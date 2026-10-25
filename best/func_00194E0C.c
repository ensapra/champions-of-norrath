typedef struct { char p[0xE4]; s32 (*f0)(s32); s32 (*f1)(s32); } Tbl;
extern Tbl *D_00480488;
typedef struct { s32 x, y, z, w; } Pt;
typedef struct {
    char pad[0x5C]; u32 count; char pad2[0xC]; Pt *pts; char pad3[0x14]; s32 px; s32 py;
} Obj;
extern char jtbl_004C006C[];
void func_00194E0C(Obj *o, s32 a, s32 b) {
    Pt *p = o->pts;
    if (o == NULL)
        func_001A1568(jtbl_004C006C + 0xEC4C, 0x25E, jtbl_004C006C + 0xED04);
    a = D_00480488->f1(a);
    b = D_00480488->f0(b);
    if (a != o->px || b != o->py) {
        u32 n;
        s32 dx = a - o->px;
        s32 dy = b - o->py;
        Pt *q = p;
        for (n = 0; n < o->count; n++) {
            q->x += dx;
            q->y += dy;
            q++;
        }
        o->py = b;
        o->px = a;
    }
}
