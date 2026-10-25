typedef struct { s32 x, y, z; u16 w, h; } E;
typedef struct { u16 a, b, c, d; } R;
typedef struct { char pad[0x58]; s32 dirty; u32 n; u32 m; char pad2[8]; E *e; R *r; } S;
typedef struct { char pad[0xE4]; s32 (*f4)(s32); s32 (*f8)(s32); } V;
extern V *D_00480488;
extern void func_001A1568(char *, s32, char *);
extern void func_00194E0C(S *, s32, s32);
extern char jtbl_004C006C[];
void func_001944A8(S *s)
{
    u32 i;
    E *e;
    R *r;
    if (s == 0) func_001A1568(jtbl_004C006C + 0xEC4C, 0x129, jtbl_004C006C + 0xED04);
    if (s->dirty) {
        i = 0;
        func_00194E0C(s, 0, 0);
        e = s->e;
        r = s->r;
        if (s->n) {
            do {
                i++;
                e->x /= D_00480488->f8(1);
                e->y /= D_00480488->f4(1);
                e->z /= D_00480488->f8(1);
                e->w /= D_00480488->f8(1);
                e->h /= D_00480488->f4(1);
                e++;
            } while (i < s->n);
        }
        if (s->m) {
            i = 0;
            do {
                i++;
                r->a = (r->a - 8) / 16;
                r->b = r->b >> 4;
                r->c = (r->c - 8) / 16 + 1;
                r->d = (r->d - 8) / 16 + 1;
                r++;
            } while (i < s->m);
        }
        s->dirty = 0;
    }
}
