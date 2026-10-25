typedef struct { f32 x, y, z; } V3;
extern V3 D_004F406C, D_004F4078, D_004F40D0, D_004F40E0;
extern u8 D_0037EF00[];
void func_00159B98(void*, void*, void*);
float sqrtf(float);
void func_0013C918(void){
    V3 n;
    f32 *f = (f32*)D_004F4060;
    f32 x, y, z, inv;
    func_00159B98(&D_004F406C, D_0037EF00, f);
    x = -f[0]; y = -f[1]; z = f[2] * 0.5f;
    f[5] = -f[5];
    D_004F40D0 = D_004F406C;
    inv = 1.0f / sqrtf(x*x + y*y + z*z);
    n.x = x*inv; n.y = y*inv; n.z = z*inv;
    func_00159B98(&D_004F4078, D_0037EF00, &n);
    f[8] = -f[8];
    D_004F40E0 = D_004F4078;
}
