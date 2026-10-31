/* identical to ___Q212RealmService14MatchGameAttrs (matched), with its names changed by decompdecomp */
typedef struct { int f0; int f4; } S;
typedef struct { char pad[12]; void *vt; } Inner;
typedef struct { short off; void (*fn)(void*,int); } Vt;
extern char D_011FF340[];
void __builtin_delete(void*);
void ___Q212RealmService9GameAttrs(S *arg0, int arg1) {
    char *inner = (char *)(long)arg0->f0;
    arg0->f4 = (int)(long)D_011FF340;
    if (inner != 0) {
        Inner *in = (Inner *)inner;
        Vt *v = (Vt *)((char *)in->vt + 8);
        short off = v->off;
        void (*fn)(void*,int) = v->fn;
        fn(inner + off, 3);
    }
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
