class B {
public:
    char pad[0x48];
    virtual void v1(int);
};
class C : public B {
public:
    char pad2[0x94-0x4C];
    short a;
    unsigned short b;
    void func_001E5B58();
};
void C::func_001E5B58() {
    short v = b;
    int t = b - 1;
    if (v < 0x1F) a -= 3;
    if (a < 0) a = 0;
    b = t;
    if ((t << 16) <= 0 && this) v1(3);
}
