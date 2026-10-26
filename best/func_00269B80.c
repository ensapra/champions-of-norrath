typedef struct { f32 x, y, z; } Vec3;

typedef struct Obj {
    struct Obj *next;
    s32 unk4;
    s32 unk8;
    s32 flags;
    f32 x;
    f32 y;
    f32 z;
    f32 radius;
} Obj;

f32 D_0048209C;
u32 D_00483E58;
u32 D_00483E5C;
s32 D_004844A0;

f32 func_0015A100(s32);
f32 func_0015A070(s32);
f32 func_001766C8(s32, Vec3 *, f32);
f32 func_00176378(s32, Vec3 *, f32);
s32 func_0013EF30(Vec3 *, Vec3 *, void **, s32);

static inline Vec3 vec3(f32 x, f32 y, f32 z)
{
    Vec3 v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

static inline Vec3 vadd(Vec3 a, Vec3 b)
{
    Vec3 r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
    return r;
}

static inline Vec3 vsub(Vec3 a, Vec3 b)
{
    Vec3 r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
    return r;
}

static inline Vec3 randvec(void)
{
    Vec3 v;
    u32 a, b, c;

    do {
        a = D_00483E5C * 0x19660D + 0x3C6EF35F;
        b = a * 0x19660D + 0x3C6EF35F;
        c = b * 0x19660D + 0x3C6EF35F;
        v.x = (f32)(a >> 16) * 0.0000152587890625f * 2.0f - 1.0f;
        v.y = (f32)(b >> 16) * 0.0000152587890625f * 2.0f - 1.0f;
        v.z = (f32)(c >> 16) * 0.0000152587890625f * 2.0f - 1.0f;
        D_00483E5C = c;
    } while (v.x * v.x + v.y * v.y + v.z * v.z > 1.0f);
    return v;
}

void *func_00269B80(void *arg0, Vec3 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 *arg6)
{
    Vec3 base;
    Vec3 pos;
    Vec3 v;
    Vec3 off;
    Vec3 dir;
    Vec3 p1;
    Vec3 p2;
    Vec3 minv;
    Vec3 maxv;
    Obj *list[32];
    f32 rad = (f32)arg5;
    f32 hgt = D_0048209C;
    f32 scale = (f32)arg2;
    f32 amt = (f32)arg3;
    f32 fa, fb, t;
    u32 seed32;
    f32 dx, dy, radsum;
    s32 i;
    s32 tries;
    Obj *obj;

    base = *arg1;
    pos = base;
    tries = 0;
    do {
        fa = func_0015A100(arg4);
        fb = func_0015A070(arg4);
        seed32 = D_00483E58 * 0x19660D + 0x3C6EF35F;
        D_00483E58 = seed32;
        t = (f32)(seed32 >> 16) * 0.0000152587890625f * amt * 2.0f - amt;
        off.x = fb * t;
        off.y = fa * t;
        off.z = 0.0f;
        v = randvec();
        dir.x = v.x * scale;
        dir.y = v.y * scale;
        dir.z = 0.0f;
        p1 = vadd(base, off);
        p2 = vadd(p1, dir);
        pos = p2;
        if (func_001766C8(D_004844A0, &pos, rad) != 0.0f) {
            tries++;
            continue;
        }
        if (func_00176378(D_004844A0, &pos, rad) - base.z >= 6.0f) {
            tries++;
            continue;
        }
        minv = vsub(pos, vec3(rad, rad, hgt));
        maxv = vadd(pos, vec3(rad, rad, hgt));
        func_0013EF30(&minv, &maxv, (void **)list, 0x80);
        i = 0;
        if (list[0] != NULL) {
            do {
                obj = list[i];
                if (!(obj->flags & 1)) {
                    dx = obj->x - pos.x;
                    dy = obj->y - pos.y;
                    radsum = rad + obj->radius;
                    if (dx * dx + dy * dy <= radsum * radsum)
                        break;
                }
                i++;
            } while (list[i] != NULL);
        }
        if (list[i] != NULL) {
            tries++;
            continue;
        }
        break;
    } while (tries < 50);
    if (arg6) {
        *arg6 = (tries != 50);
    }
    *(Vec3 *)arg0 = pos;
    return arg0;
}
