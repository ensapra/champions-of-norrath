typedef struct { s32 on; char s0[0x100]; char s1[0x100]; char s2[0x100]; char s3[0x100]; char s4[0x100]; s32 a; s32 b; s32 c; } Dst12CB48;
typedef struct { u8 pad[0xC00]; char s0[0x100]; char s1[0x100]; char s2[0x100]; char s3[0x100]; char s4[0x100]; u8 pad2[0x200]; s32 a; s32 x; s32 b; s32 c; } Src12CB48;
typedef struct { u8 pad[0x4C0]; s32 f; } Ent12CB48;
void func_0013B5F8(char *, char *, ...);
char *func_001A42B8(char *, char *);
extern s32 D_001BB904[];
extern Dst12CB48 D_001BB908[];
extern Ent12CB48 *D_001BD948[];
extern s32 D_001C4E24[];
extern Src12CB48 D_001C5500[];
extern s32 D_001C6834[];
extern char D_004CA3A0[];
extern char D_004CA3F8[];
extern char D_004CA408[];

void func_0012CB48(void)
{
    Src12CB48 *s;
    Dst12CB48 *d;
    s32 idx = D_001C4E24[0];
    Ent12CB48 *e = &D_001BD948[0][idx];
    if (e->f == -1) {
        if (idx >= D_001C6834[0])
            func_0013B5F8(D_004CA3F8, D_004CA3A0, idx);
        return;
    }
    s = D_001C5500;
    d = D_001BB908;
    D_001BB904[0] = 0;
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    func_001A42B8(d->s3, s->s3);
    func_001A42B8(d->s4, s->s4);
    func_001A42B8(d->s2, s->s2);
    func_001A42B8(d->s0, s->s0);
    func_001A42B8(d->s1, s->s1);
    d->on = 1;
    func_0013B5F8(D_004CA408, D_004CA3A0);
}
