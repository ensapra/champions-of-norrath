typedef struct {
    u8 *p;
    s32 r;
    s32 w;
    u16 flags;
} FILE303800;

s32 func_00303680(FILE303800 *);

s32 func_00303838(FILE303800 *fp)
{
    s32 c;
    if (func_00303680(fp) == 0) {
        fp->r--;
        c = *fp->p++;
    } else {
        c = -1;
    }
    return c;
}
