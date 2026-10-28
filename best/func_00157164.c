s64 func_00170968(s64, s64);
#define I(p, o) (*(s32 *)((char *)(p) + (o)))
void func_00157164(void *arg0) {
    s64 *v = (s64 *)((char *)arg0 + 0x930);
    s64 t;
    I(arg0, 0x918) = I(arg0, 0x928);
    t = v[2];
    I(arg0, 0x928) = func_00170968((t + v[0]) << 12, v[1] - t);
}
