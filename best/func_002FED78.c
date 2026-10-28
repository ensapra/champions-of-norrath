extern "C" { void func_002FEC60(void); s32 func_0031B490(void); void func_002FF198(s32,s32*) __attribute__((noreturn)); }
extern "C" void func_002FED78(void){
    try { func_002FEC60(); return; }
    catch (...) { s32 y; y = func_0031B490(); func_002FF198(1,&y); }
}
