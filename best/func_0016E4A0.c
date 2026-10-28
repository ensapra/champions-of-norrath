#define F(p,o) (*(s32*)((char*)(p)+(o)))
extern char jtbl_004C006C[];
void func_0014CBF4(s32,void*,s32);
s32 func_0016E4A0(void *p, u16 *e)
{
    struct {s32 type; s32 pad; s64 value; char rest[1008];} b;
    static void *const tbl[] = {&&send, &&clear, &&zero};
    if ((u32)(*e - 1) >= 15)
        return 0;
    goto *((void **)(jtbl_004C006C + 0xBB64))[*e - 1];
send:
    b.type = 9;
    b.value = F(e,0x14) - F(p,0x924);
    func_0014CBF4(F(p,0x918), &b, 1);
done:
    return 1;
clear:
    F(p,0x920) = 0;
    goto done;
zero:
    return 0;
}
