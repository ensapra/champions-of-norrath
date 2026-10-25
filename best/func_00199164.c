void func_001994A8(void *, s32, s32);
void func_001995CC(void *, s32);

typedef struct { char pad[0xF0]; s32 pos; char pad2[0xA84 - 0xF4]; s32 last; } S199164;

void func_00199164(S199164 *s) {
    s32 cur = s->pos;
    s32 d = cur - s->last;
    if (s->last == -1) {
        s->last = cur;
        func_001994A8(s, cur, 8);
        return;
    }
    if (d > 0) {
        func_001995CC(s, d);
        s->last = s->pos;
        func_001994A8(s, s->pos - d + 8, d);
        return;
    }
    if (d < 0) {
        func_001995CC(s, d);
        s->last = s->pos;
        func_001994A8(s, s->pos, -d);
        return;
    }
}
