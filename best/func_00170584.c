char *func_00170628(u32 id);
s64 func_001707D0(char *, s32, void *);
void func_00170584(u64 *out, u32 id, ...) {
    char *ap = (char *)__builtin_next_arg(id) - (8 - 2) * 8;
    s32 fmt = *(s32 *)ap;
    ap += 8;
    out[0] = func_001707D0(func_00170628(id), fmt, ap);
    out[1] = id;
}
