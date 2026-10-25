struct DynRes { void *dst_ptr; s32 whole2dst; s32 whole2src; s32 dst2src; };
class TI {
public:
    const char *name;
    virtual void v1();
    virtual void v2();
    virtual bool do_dyncast(s32 boff, s32 access, const TI &target, void *obj, const TI &sub, void *subptr, DynRes &r) const;
};
extern "C" bool func_002FD2E0(const TI *, const TI *);
class SITI : public TI {
public:
    const TI *base;
    bool func_002FD708(s32 boff, s32 access, const TI &target, void *obj, const TI &sub, void *subptr, DynRes &r) const;
};

bool SITI::func_002FD708(s32 boff, s32 access, const TI &target, void *obj, const TI &sub, void *subptr, DynRes &r) const {
    if (obj == subptr && func_002FD2E0(this, &sub)) {
        r.whole2src = access;
        return false;
    }
    if (func_002FD2E0(this, &target)) {
        r.dst_ptr = obj;
        r.whole2dst = access;
        if (boff >= 0) {
            r.dst2src = (char *)subptr - (char *)obj == boff ? 6 : 1;
        } else if (boff == -2) {
            r.dst2src = 1;
        }
        return false;
    }
    return base->do_dyncast(boff, access, target, obj, sub, subptr, r);
}
