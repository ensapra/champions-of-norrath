typedef struct { short off; void (*fn)(void*,int); } Vt;
typedef struct { char pad[12]; void *vt; } Inner;
void *__builtin_new(unsigned int);
void __Q212RealmService12GameAttrsImpRCQ212RealmService12GameAttrsImp(void*, void*);
void **__as__Q212RealmService9GameAttrsRCQ212RealmService9GameAttrs(void **arg0, void **arg1) {
    if (arg0 != arg1) {
        if (*arg0) {
            Inner *in = (Inner *)*arg0;
            Vt *v = (Vt *)((char *)in->vt + 8);
            v->fn((char *)in + v->off, 3);
        }
        if (*arg1) {
            void *p = __builtin_new(16);
            if (p) {
                __Q212RealmService12GameAttrsImpRCQ212RealmService12GameAttrsImp(p, *arg1);
            }
            *arg0 = p;
        }
    }
    return arg0;
}
