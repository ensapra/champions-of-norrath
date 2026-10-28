typedef struct {
    char pad0[0x4F0]; s32 action;
    char pad4f4[0x70]; s32 mode;
    char pad568[0x728]; u32 callback;
    char padC94[0x70]; s32 done; s32 padD08; s32 result; s32 state;
} Obj5A190;
typedef void (*Callback5A190)(s32,s32,s32,s32,s32,s32,s32);
extern s32 func_001C8098[];
s32 func_0015A354(void *,s32,s32,s32);
s32 func_0015A414(void *,s32,s32,s32);
s32 func_0015A41C(void *,s32,s32,s32);
void func_0015AE6C(void *,s32);
void *func_0014D29C(void *);
void func_0014F288(void *,s32);
s32 func_0015A190(Obj5A190 *p,s32 b,s32 c,s32 d,s32 e,s32 f,s32 g) {
    s32 status;
    ((Callback5A190)*(u32 *)((char *)func_001C8098+0xDAC))((s32)p,b,c,d,e,f,g);
    switch (p->action) {
    case 1:
        status = p->mode;
        switch (status) {
        case 1:
            p->state = status;
            func_0015A354(p,b,c,d);
            return 1;
        case 2:
            func_0015A414(p,b,c,d);
            break;
        case 3:
            func_0015A41C(p,b,c,d);
            break;
        default:
            return 1;
        }
        if (p->result == 0) status = 0;
        p->state = status;
        return 1;
    case 5:
        if (p->done != 0) {
            if (p->state >= 0 && p->state < 2) func_0015AE6C(p,0);
        }
        return 1;
    case 11:
        if (p->callback != 0) {
            p->state = 0;
            func_0014F288(func_0014D29C(p), p->callback);
            p->callback = 0;
        }
        return 1;
    case 2: case 3: case 4: case 6: case 7: case 8: case 9: case 10:
        break;
    }
}
