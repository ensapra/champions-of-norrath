extern char D_00470F38[], D_00470F48[], D_00470F68[], D_00485550[], D_00485558[];
s32 func_00143A80(void *, void *, s32);
s32 func_001671F8(s32);
void func_00191868(s32, void *);
s32 func_001D3E88(s32);
void func_00303EB8(void *, void *, ...);
void ovl_ntgui2_func_00191830(s32, s32);

s32 func_00220A38(char *obj, s32 arg1)
{
    s32 result = 0;
    if (*(s32 *)(obj + 0x11C) & 0x10) {
        char err[0x40];
        char tmp[0x10];
        s32 i;
        s32 item, msg;
        for (i = 0; (item = func_00143A80(obj, D_00485550, i)) != 0; i++) {
            if (func_001D3E88(item) == 0) {
                msg = func_00143A80(obj, D_00470F38, 0);
                if (msg == 0) {
                    func_00303EB8(err, D_00470F48, obj + 0x4C);
                    func_00191868(arg1, obj + 0x4C);
                } else {
                    ovl_ntgui2_func_00191830(arg1, func_001671F8(msg));
                }
                return 0;
            }
        }
        func_00303EB8(tmp, D_00470F68, *(s32 *)(obj + 0x178));
        if (func_00143A80(obj, D_00485558, 0)) {
            ovl_ntgui2_func_00191830(arg1, func_001671F8(func_00143A80(obj, D_00485558, 0)));
            result = 1;
        } else if (func_00143A80(obj, tmp, 0)) {
            ovl_ntgui2_func_00191830(arg1, func_001671F8(func_00143A80(obj, tmp, 0)));
            result = 1;
        }
    }
    return result;
}
