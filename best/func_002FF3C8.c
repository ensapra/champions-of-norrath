class exception {
public:
    exception() {}
    virtual ~exception() {}
};
class bad_alloc : public exception {
public:
    bad_alloc() {}
    virtual ~bad_alloc() {}
};

extern "C" void func_002FF3C8(void) {
    throw bad_alloc();
}
