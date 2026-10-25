class ExBase { public: virtual ~ExBase() {} };
class Ex : public ExBase { public: virtual ~Ex() {} };
extern "C" void func_002FF360(void)
{
    throw Ex();
}
