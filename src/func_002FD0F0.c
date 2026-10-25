/* identical to func_001A1398 (matched), with its names changed by decompdecomp */
typedef struct Info { s8 *aug; void *eh_ptr; s32 ca; s32 da; u32 ra; } Info;
typedef struct FS { s32 p0; void *eh_ptr; u8 pad[0x3F2]; u16 retaddr; u8 pad2[4]; s64 q[15]; } FS;
typedef struct IFS { FS s; s32 x[2]; } IFS;
typedef struct FDE { u32 len; s32 delta; u32 pc_begin; u32 range; } FDE;
extern FDE *func_002FC8C8(u32);
extern u8 *func_002FCA70(FDE *, Info *);
extern void *func_003021B0(void *, s32, s32);
extern u8 *func_002FCCA0(u8 *, FS *, Info *, u32 *);
extern s32 func_002FBD18(u8 *, s32 *);

FS *func_002FD0F0(u32 pc_target, FS *state_in) {
    FDE *f;
    u8 *insn, *end;
    u32 pc;
    s32 n;
    Info info;
    IFS state;
    u32 *cie;

    f = func_002FC8C8(pc_target);
    if (f == 0) return (FS *)f;
    insn = func_002FCA70(f, &info);
    if (insn == 0) return (FS *)insn;
    func_003021B0(&state, 0, sizeof(IFS));
    state.s.retaddr = info.ra;
    state.s.eh_ptr = info.eh_ptr;
    cie = (u32 *)((u8 *)f + 4 - f->delta);
    end = (u8 *)cie + *cie + 4;
    while (insn < end) insn = func_002FCCA0(insn, &state.s, &info, 0);
    insn = (u8 *)f + 0x10;
    if (info.aug[0] == 'z') {
        insn = func_002FBD18(insn, &n) + (u8 *)0;
        insn += n;
    }
    end = (u8 *)f + f->len + 4;
    pc = f->pc_begin;
    while (insn < end && pc_target >= pc) {
        insn = func_002FCCA0(insn, &state.s, &info, &pc);
    }
    *state_in = state.s;
    return state_in;
}
