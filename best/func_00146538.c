extern s32 D_001C6830[], D_001C6834[], D_001C6838[], D_001C683C[], D_001C6890[], D_001C6898[];
extern s32 func_001C6058[];
extern s32 func_001B9FD8[];
extern s32 jtbl_004C006C[];
extern char func_0013CBA0[], func_0013CC88[], func_0013CEF0[], func_001466E0[], func_001471D0[];
s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, void *, s32);
void func_001A3D78(void *, void *, void *, void *);
s32 func_001A4174(void *, void *);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);

void func_00146538(void)
{
    u8 sp[0x280];
    s32 i;
    s32 code;
    s32 *pc;
    u8 *q;
    if (D_001C6890[0] != 1) {
        if (D_001C6838[0] == 10 && D_001C6834[0] == D_001C6838[0]) {
            code = 0x55;
            goto warn;
        }
        if (D_001C6890[0] == 0 && D_001C6838[0] >= 30) {
            code = 0x57;
            goto warn;
        }
        if (D_001C6834[0] >= 10) {
            code = 0x59;
            goto warn;
        }
    }
    func_001A3D78(sp, jtbl_004C006C + 0xB124 / 4, func_001C6058 + 0xA8 / 4, func_001C6058 + 0xA8 / 4 + 0x100 / 4);
    i = 0;
    pc = D_001C683C;
    while (i < *pc) {
        if (!func_001A4174((char *)D_001C6830[0] + (i * 33 * 4 - i) * 4 + 0x10C, sp)) {
            D_001C6898[0] = 1;
            i++;
            break;
        }
        i++;
    }
    if (D_001C6898[0] == 0 && *pc >= 30) {
        code = 0x7B;
        goto warn;
    }
    q = sp + 0x260;
    func_00118140(q, 1, func_0013CBA0, func_0013CC88, func_0013CEF0);
    *(void **)(sp + 0x268) = func_001466E0;
    func_00118160(q);
    return;
warn:
    func_00114948(2, 500, 250, func_0011BA18(code), func_001471D0, func_001B9FD8[0x16EC / 4]);
}
