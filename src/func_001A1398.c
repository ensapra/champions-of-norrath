typedef struct Info { s8 *aug; void *eh_ptr; s32 ca; s32 da; u32 ra; } Info;
typedef struct FS { s32 p0; void *eh_ptr; u8 pad[0x3F2]; u16 retaddr; u8 pad2[4]; s64 q[15]; } FS;
typedef struct IFS { FS s; s32 x[2]; } IFS;
typedef struct FDE { u32 len; s32 delta; u32 pc_begin; u32 range; } FDE;
extern FDE *func_001A0B70(u32);
extern u8 *func_001A0D18(FDE *, Info *);
extern void *func_001A2660(void *, s32, s32);
extern u8 *func_001A0F48(u8 *, FS *, Info *, u32 *);
extern s32 func_0019FFC0(u8 *, s32 *);

FS *func_001A1398(u32 pc_target, FS *state_in) {
    FDE *f;
    u8 *insn, *end;
    u32 pc;
    s32 n;
    Info info;
    IFS state;
    u32 *cie;

    f = func_001A0B70(pc_target);
    if (f == 0) return (FS *)f;
    insn = func_001A0D18(f, &info);
    if (insn == 0) return (FS *)insn;
    func_001A2660(&state, 0, sizeof(IFS));
    state.s.retaddr = info.ra;
    state.s.eh_ptr = info.eh_ptr;
    cie = (u32 *)((u8 *)f + 4 - f->delta);
    end = (u8 *)cie + *cie + 4;
    while (insn < end) insn = func_001A0F48(insn, &state.s, &info, 0);
    insn = (u8 *)f + 0x10;
    if (info.aug[0] == 'z') {
        insn = func_0019FFC0(insn, &n) + (u8 *)0;
        insn += n;
    }
    end = (u8 *)f + f->len + 4;
    pc = f->pc_begin;
    while (insn < end && pc_target >= pc) {
        insn = func_001A0F48(insn, &state.s, &info, &pc);
    }
    *state_in = state.s;
    return state_in;
}
