typedef struct {
    u8 *p;
    s32 r;
    s32 w;
    u16 flags;
} FILE303800;

s32 func_00300A70(FILE303800 *, s32, s32);
s32 func_00303680(FILE303800 *);

void func_00303800(FILE303800 *fp)
{
    func_00300A70(fp, 0, 0);
    fp->flags &= 0xFF9F;
}

s32 func_00303838(FILE303800 *fp)
{
    if (func_00303680(fp) != 0) {
        return -1;
    }
    fp->r--;
    return *fp->p++;
}
