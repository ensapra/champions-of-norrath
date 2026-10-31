typedef struct { int f0; int f4; } S; /* not needed */
typedef struct { char pad[12]; void *vt; } Inner;
typedef struct { short off; void (*fn)(void*,int); } Vt;
void *__builtin_new(unsigned int);
void __Q212RealmService17MatchGameAttrsImp(void*);
void __Q212RealmService17MatchGameAttrsImpRCQ212RealmService17MatchGameAttrsImp(void*, void*);
void **__as__Q212RealmService14MatchGameAttrsRCQ212RealmService14MatchGameAttrs(void **arg0, void **arg1) {
    if (arg0 != arg1) {
        if (*arg0) {
            Inner *in = (Inner *)*arg0;
            Vt *v = (Vt *)((char *)in->vt + 8);
            v->fn((char *)in + v->off, 3);
            *arg0 = 0;
        }
        if (*arg1) {
            void *p = __builtin_new(16);
            if (p != 0) {
                __Q212RealmService17MatchGameAttrsImpRCQ212RealmService17MatchGameAttrsImp(p, *arg1);
            }
            *arg0 = p;
        } else {
            void *p = __builtin_new(16);
            if (p != 0) {
                __Q212RealmService17MatchGameAttrsImp(p);
            }
            *arg0 = p;
        }
    }
    return arg0;
}
