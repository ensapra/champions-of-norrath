typedef struct { s32 v0; u8 pad[0x1C]; s32 v20; u8 pad2[0xC]; u8 buf[1]; } G;
extern s32 D_00447F74[];
extern s32 D_00447F7C[];
void *func_00301FFC(void *, void *, s32);
s32 iSignalSema_2(s32);

typedef struct { void *dst; s32 *out; s32 v; } Req;

#define CUR ((G *)D_00447F74[0])

void func_002EAEA8(Req *r) {
    func_00301FFC(r->dst, CUR->buf, CUR->v20);
    *r->out = CUR->v20;
    r->v = CUR->v0;
    iSignalSema_2(D_00447F7C[0]);
}

void func_002EAF10(Req *r) {
    *r->out = CUR->v20;
    r->v = CUR->v0;
    iSignalSema_2(D_00447F7C[0]);
}
