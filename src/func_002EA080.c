s32 DeleteSema_2(s32); s32 SignalSema_2(s32); s32 WaitSema_2(s32);
s32 func_002D8270(void *,s32,s32,void *,s32,void *,s32,s32,s32);
s32 func_002EAE08(s32,s32);
extern u8 D_00447F70[];
extern u8 D_00447F7C[];
extern u8 D_00447F84[];
extern u8 D_008EA780[];
extern u8 D_008EA7C0[];
s32 func_002EA080(void) {
    s32 x=*(s32 *)D_00447F7C;
    if (x != -1) {
        WaitSema_2(x);
        func_002EAE08(0,0);
        if (*(s32 *)D_00447F70 != 0) {
            if (*(u32 *)D_00447F84 != 0) ((void (*)(s32))*(u32 *)D_00447F84)(*(s32 *)D_00447F70);
            *(s32 *)D_00447F70=0;
        }
        func_002D8270(D_008EA780,0x16,0,D_008EA7C0,0x20,D_008EA7C0,0,0,0);
        *(s32 *)(D_008EA780+0x24)=0;
        SignalSema_2(*(s32 *)D_00447F7C);
        DeleteSema_2(*(s32 *)D_00447F7C);
        *(s32 *)D_00447F7C=-1;
    }
    return 0;
}
