struct V3 { f32 x, y, z; V3() {} };
struct Sub { char pad[5]; s8 f5; };
struct Obj {
    char p0[0xC]; s32 flags;
    char p1[0xC]; f32 f1c; f32 f20;
    char p2[4]; u8 b28; u8 b29;
    char p3[0xE]; s16 f38;
    char p4[0xE]; void *vt;
    char name[0x20]; s8 f6c; char lump[0x23];
    s32 f90; s32 f94;
    Sub sub;
    char p5[0x32]; s32 fd0;
};
extern "C" {
extern u8 D_0047E1F1[];
extern char D_0044ED78[], D_00470CD8[], D_00470CE8[], D_00470CF8[], D_00470D08[], D_00470D18[], D_00470D28[];
extern char D_00485478[], D_00485480[], D_00485488[], D_00485490[], D_00485498[], D_004854A0[];
extern s8 D_00484318;
void func_001411F0(void *, V3, s32, s32);
char *func_00143A80(void *, char *, s32);
s32 func_00140F60(void *, char *, s32);
void func_001637A8(void *);
s32 func_00165DC0(void *, char *);
void func_0016C820(void *, s32, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *);
void func_001D3E88(void *);
char *func_00304240(char *, char *);
char *func_00304640(char *, char *);
f32 sqrtf(f32);

void func_0021E548(Obj *o, char *s, V3 pos, s16 sh, s32 a4) {
    char *d;
    char *lp;
    char tmp[0x20];
    s32 iv[6];
    func_001411F0(o, pos, 0, a4);
    o->vt = D_0044ED78;
    o->sub.f5 = 1;
    o->f38 = sh;
    d = o->name;
    while (*s && *s != '-' && *s != ';' && *s != ',') {
        s8 c = *s++;
        *d++ = (D_0047E1F1[c] & 1) ? c + 0x20 : c;
    }
    *d = 0;
    if (func_00143A80(o, D_00470CD8, 0)) {
        lp = o->lump;
        func_00304640(lp, func_00143A80(o, D_00470CD8, 0));
    } else {
        lp = o->lump;
        func_00304640(lp, o->name);
    }
    func_00304240(lp, D_00485478);
    func_00304640(tmp, o->name);
    func_00304240(tmp, D_00485480);
    o->f90 = func_00165DC0(lp, tmp);
    func_00304640(tmp, o->name);
    func_00304240(tmp, D_00485488);
    o->f94 = func_00165DC0(lp, tmp);
    o->f1c = 12.0f;
    o->f20 = 60.0f;
    if (func_00143A80(o, D_00485490, 0)) {
        o->f1c = (f32)func_00140F60(o, D_00485490, 0);
        if (o->f1c == 0.0f) o->flags |= 1;
    }
    if (func_00143A80(o, D_00485498, 0)) {
        o->f1c = (f32)func_00140F60(o, D_00485498, 0);
        if (o->f1c == 0.0f) o->flags |= 1;
    }
    if (func_00140F60(o, D_004854A0, 0)) {
        o->f20 = (f32)func_00140F60(o, D_004854A0, 0);
    }
    o->b28 = (u8)o->f1c;
    o->b29 = (u8)o->f20;
    if (o->f90) {
        V3 a, b;
        func_0016C820(o, -1, &iv[0], &iv[1], &iv[2], &iv[3], &iv[4], &iv[5]);
        a.x = (f32)iv[0]; a.y = (f32)iv[1]; a.z = (f32)iv[2];
        b.x = (f32)iv[3]; b.y = (f32)iv[4]; b.z = (f32)iv[5];
        {
            f32 dx = a.x - b.x, dy = a.y - b.y;
            u8 v = (u8)(sqrtf(dx * dx + dy * dy) * 0.5f);
            o->b28 = v;
            if ((f32)v < o->f1c) o->b28 = (u8)o->f1c;
        }
        {
            V3 a2, b2;
            a2.x = (f32)iv[0]; a2.y = (f32)iv[1]; a2.z = (f32)iv[2];
            a = a2;
            b2.x = (f32)iv[0]; b2.y = (f32)iv[1]; b2.z = (f32)iv[5];
            b = b2;
            f32 dx = a.x - b.x, dy = a.y - b.y, dz = a.z - b.z;
            u8 v = (u8)(sqrtf(dx * dx + dy * dy + dz * dz) * 0.5f);
            o->b29 = v;
            if ((f32)v < o->f1c) o->b29 = (u8)o->f1c;
        }
    }
    if (func_00143A80(o, D_00470CE8, 0)) {
        s32 v = func_00140F60(o, D_00470CE8, 0);
        o->b28 = v > 255 ? 255 : v;
    }
    if (func_00143A80(o, D_00470CF8, 0)) {
        s32 v = func_00140F60(o, D_00470CF8, 0);
        o->b29 = v > 255 ? 255 : v;
    }
    func_001637A8(&o->sub);
    if (!D_00484318) {
        char *p = func_00143A80(o, D_00470D08, 0);
        if (p) func_001D3E88(p);
    }
    o->f6c = func_00143A80(o, D_00470D18, 0) != 0;
    if (func_00140F60(o, D_00470D28, 0)) o->fd0 |= 2;
}
}
