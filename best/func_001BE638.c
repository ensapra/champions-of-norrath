typedef struct { char s[9]; } Str9;
typedef struct { Str9 a; char pad[0x17]; Str9 b; char pad2[0x17]; } Ent;
typedef struct { char pad[0x4568]; Ent e[64]; s32 n; char pad2[0x5DB0 - 0x556C]; } Ctx;
extern char D_00408600[];
extern Str9 D_00468D90;
extern s32 D_00484538;
s32 func_003044FC(s32, void *);
void func_00304640(void *, void *);

void func_001BE638(s32 arg0) {
    s32 c, i, j, last;
    s32 off = 0;
    for (c = 0; c < D_00484538; c++, off += 0x5DB0) {
        Ctx *ctx = (Ctx *)(D_00408600 + off);
        last = -1;
        for (i = 0; i < ctx->n; i++) {
            Ent *p = &ctx->e[i];
            if (func_003044FC(arg0, p) == 0) {
                last = i;
                p->a = D_00468D90;
                p->b = D_00468D90;
            }
        }
        if (last != -1) {
            char *r = (char *)ctx + (last << 6);
            for (j = last; j < ctx->n - 1; j++, r += 0x40) {
                func_00304640(r + 0x4568, r + 0x45A8);
                func_00304640(r + 0x4588, r + 0x45C8);
            }
            ctx->n = ctx->n - 1;
        }
    }
}
