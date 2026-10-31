/* identical to __as__Q212RealmService9GameAttrsRCQ212RealmService9GameAttrs (matched), with its names changed by decompdecomp */
typedef struct { short off; void (*fn)(void*,int); } Vt;
typedef struct { char pad[12]; void *vt; } Inner;
void *__builtin_new(unsigned int);
void __Q212RealmService12GameStatsImpRCQ212RealmService12GameStatsImp(void*, void*);
void **__as__Q212RealmService9GameStatsRCQ212RealmService9GameStats(void **arg0, void **arg1) {
    if (arg0 != arg1) {
        if (*arg0) {
            Inner *in = (Inner *)*arg0;
            Vt *v = (Vt *)((char *)in->vt + 8);
            v->fn((char *)in + v->off, 3);
        }
        if (*arg1) {
            void *p = __builtin_new(16);
            if (p) {
                __Q212RealmService12GameStatsImpRCQ212RealmService12GameStatsImp(p, *arg1);
            }
            *arg0 = p;
        }
    }
    return arg0;
}
