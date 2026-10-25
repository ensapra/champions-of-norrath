extern "C" {
void *func_001449A8(unsigned);
}
typedef void (*new_handler)();
extern new_handler D_0044818C[];
struct bad_alloc {
    virtual ~bad_alloc();
    virtual const char *what() const;
};
extern "C" void *func_002FEC60(unsigned sz) throw(bad_alloc) {
    void *p;
    if (sz == 0) sz = 1;
    p = func_001449A8(sz);
    while (p == 0) {
        new_handler h = D_0044818C[0];
        if (!h) throw bad_alloc();
        h();
        p = func_001449A8(sz);
    }
    return p;
}
