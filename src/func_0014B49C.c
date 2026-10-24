/* identical to func_0014B460 (matched), with its names changed by decompdecomp */
typedef struct S { unsigned char unk_00[0x50]; int *unk_50; } S;
extern s32 func_0014FD58(s32, void *);
void *func_0014B49C(S *arg0) {
    if (arg0->unk_50 == NULL) {
        return arg0;
    }
    func_0014FD58((s32)arg0->unk_50, arg0);
    return arg0;
}
